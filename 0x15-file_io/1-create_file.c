#include "main.h"

/**
 * create_file - asdasd
 * @filename: asdasd
 * @text_content: asdasd
 * Return: asdasd
 */

int create_file(const char *filename, char *text_content)
{
	int a;
	ssize_t b = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	a = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (a == -1)
		return (-1);
	if (l)
		b = write(a, text_content, l);
	close(a);
	return (b == l ? 1 : -1);
}
