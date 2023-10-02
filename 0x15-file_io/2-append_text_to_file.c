#include "main.h"

/**
 * _strlen - adasd
 * @s: asdasd
 * Return: adasd
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
 * append_text_to_file - asdasd
 * @filename: asdasd
 * @text_content: asdasd
 * Return: asda
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	ssize_t b = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);
	if (l)
		b = write(a, text_content, l);
	close(a);
	return (b == l ? 1 : -1);
}
