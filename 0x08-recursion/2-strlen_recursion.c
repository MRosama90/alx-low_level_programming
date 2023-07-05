#include "main.h"

/**
 * _strlen_recursion - returs the length of a string
 * @s: pointer string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int ntr = 0;

	if (*s > '\0')
	{
		ntr += _strlen_recursion(s + 1) + 1;
	}

	return (ntr);
}
