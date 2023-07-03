#include "main.h"

/**
 * _strbrk -  function that searches a string for any of a set of bytes.
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */

char *_strbrk(char *s, char *accept)
{
	int a, b;
	char *p;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				p = &s[a];
				return (p);
			}
			b++;
		}
		a++;
	}

	return (0);
}
