#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - asdasd
 * @str: asdasd
 * Return: asdasd
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - asda
 * @argc: adasd
 * @argv: asfdas
 * Return: adasd
 */

int main(int argc, char *argv[])
{
	int count, str_to_int, sum;

	sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
			{
				str_to_int = atoi(argv[count]);
				sum += str_to_int;
			}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
