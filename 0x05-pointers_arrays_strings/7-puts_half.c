#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: char array string tyore
 * Description: if odd number of charachter, print (length -1) / s
*/

void puts_haf(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
