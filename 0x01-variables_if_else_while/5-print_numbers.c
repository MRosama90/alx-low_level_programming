#include <stdio.h>

/**
 * main - Entry Point
 * Description: print all single digit numbers
 * Return: ALways 0 (success)
 *
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}