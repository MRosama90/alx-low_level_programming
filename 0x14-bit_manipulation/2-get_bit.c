#include "main.h"

/**
 * get_bit - adasd
 * @n: adasd
 * @index: asdasd
 * Return: asdasd
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
