#include "main.h"

/**
 * print_binary - asdasd
 * @n: asdasd
 * Return: asdasd
 */

void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, c = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
