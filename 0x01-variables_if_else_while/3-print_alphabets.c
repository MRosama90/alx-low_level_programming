#include <stdio.h>

/**
 * main - Entry Point
 * Description: print alphabet in lowercase then uppercase
 * return: always  0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*prints A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++
	}
	putchar('\n');
	return (0);
}
