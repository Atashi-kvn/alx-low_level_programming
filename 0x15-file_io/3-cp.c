#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * error_exit - Print an error message and exit with the given error code.
 * @exit_code: The exit code to use when terminating the program.
 * @format: The format string for the error message.
 * @...: Additional arguments for the format string.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 *
 * This function takes a file descriptor as an argument and attempts to close it
 * using the `close()` system call. If the `close()` call fails, an error message
 * is printed to the standard error (stderr) using `dprintf()` with the appropriate
 * error code and the file descriptor value. The program then exits with the
 * corresponding error code (100) using `exit()`.
 *
 * @note The `close()` system call can fail due to various reasons, such as
 * invalid file descriptor, permission issues, or resource constraints.
 *
 * Return: None. The function exits the program if an error occurs.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * This is the main function of the program that implements the functionality to
 * copy the contents of a file to another file. It takes the number of arguments
 * supplied to the program (argc) and an array of pointers to the arguments (argv).
 *
 * The program follows the following error handling approach:
 * - If the argument count is incorrect, it exits with code 97 and prints an error
 *   message to the standard error (stderr) indicating the correct usage of the
 *   program.
 * - If the file_from does not exist or cannot be read, it exits with code 98 and
 *   prints an error message to the stderr indicating the specific file that
 *   cannot be read.
 * - If the file_to cannot be created or written to, it exits with code 99 and
 *   prints an error message to the stderr indicating the specific file that
 *   cannot be created or written to.
 * - If either file_to or file_from cannot be closed, it exits with code 100 and
 *   prints an error message to the stderr indicating the specific file descriptor
 *   value that cannot be closed.
 *
 * @note It's important to handle errors properly to ensure the reliability and
 *       robustness of the program.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
