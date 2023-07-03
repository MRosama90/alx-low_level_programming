#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 * Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0 , i = n;

	for (;r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
