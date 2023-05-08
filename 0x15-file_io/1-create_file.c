#include "main.h"

/**
 * create_file - this function Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: this is a pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text_content, len);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}