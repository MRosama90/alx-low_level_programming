#include "main.h"

/**
 * print_sign - print + if n > zero,
 * 0 if n = zero - and if n < zero
 * @n: takes integer input for functions
 * Return: 1 if +,
 * 0 if 0,
 * -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_puthar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
