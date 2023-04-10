#include "main.h"

/**
 * create_file - Create a file with the given name and write the text content
 * to it.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file cannot be created, file cannot
 * be written, write "fails", etc...).
 * The created file will have the permissions rw-------. If the file already
 * exists, the permissions will not be changed.
 * If filename is NULL, return -1.
 * If text_content is NULL, create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
