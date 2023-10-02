#include "main.h"

/**
 * read_textfile - asdasda
 * @filename: asdasd
 * @letters: asdasd
 * Return: asdasd
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	b = read(a, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(a);
	return (b);
}
