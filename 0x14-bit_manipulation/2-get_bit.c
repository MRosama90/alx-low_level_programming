#include "main.h"
/**
 * get_bit - asdasd
 * @n: asdasd
 * @index: asdad
 * Return: asdasd
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
