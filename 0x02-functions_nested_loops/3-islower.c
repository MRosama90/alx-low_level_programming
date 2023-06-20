#include "main.h"

/**
 * _islower - function that checks if the character is lowercase
 *
 * @c: checks the input of the function
 *
 * Return:  if 'c' is lowercase
 * otherwise alwasy  (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
