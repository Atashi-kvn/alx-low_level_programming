#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Read a text file and print it to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Actual number of letters read and printed. If file cannot be opened
 * or read, return 0. If filename is NULL, return 0. If write fails or does
 * not write the expected amount of bytes, return 0.
 **/
 
 ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
