#include "main.h"

/**
 * flip_bits - asdasd
 * @n: asdasd
 * @m: asdasd
 * Return: asdasd
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int c = 0;

	while (a)
	{
		if (a & 1ul)
			c++;
		a = a >> 1;
	}
	return (c);
}
