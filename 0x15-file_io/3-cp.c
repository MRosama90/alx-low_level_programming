#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close a %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - asdasd
 * @ac: adasd
 * @av: asdasd
 * Return: asdasd
 */

int main(int ac, char **av)
{
	int from_a = 0, to_a = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_a = open(av[1], O_RDONLY);
	if (from_a == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_a = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (from_a == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((b = read(from_a, buf, READ_BUF_SIZE)) > 0)
		if (write(to_a, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_a = close(from_a);
	to_a = close(to_a);
	if (from_a)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_a), exit(100);
	if (to_a)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_a), exit(100);

	return (EXIT_SUCCESS);
}
