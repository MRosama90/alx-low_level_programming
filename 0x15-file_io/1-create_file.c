#include "main.h"

/**
 * create_file - asdasd
 * @filename: asdasd
 * @text_content: asdasd
 * Return: asdasd
 */

int create_file(const char *filename, char *text_content)
{
	int fd, a, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(fd, text_content, l);

	if (fd == -1 || a == -1)
		return (-1);

	close(fd);

	return (1);
}
