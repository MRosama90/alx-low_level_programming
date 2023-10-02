#include "main.h"

/**
 * _strlen - asdasd
 * @s: asdasd
 * Return: asdasd
 */

int _strlen(char *s)
{
	int x = 0;

	if (!s)
		return (0);

	while (*s++)
		x++;
	return (x);
}

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
	a = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_TRUSR | S_IWUSR);
	if (a == -1)
		return (-1);
	if (l)
		b = write(a, text_content, l);
	close(a);
	return (b == len ? 1 : -1);
}
