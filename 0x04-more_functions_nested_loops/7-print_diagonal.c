#include "main.h"

/**
 * print_diagonal - print a digonal line
 * @n: is the number of times the \ character should be printed
 * Return: void
*/

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; i < n; i++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
