#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int isNumber(char number[]);
/**
 * main - entry point
 * @argv: array of strings
 * @argc: count of argv
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc - 1 == 0)
		printf("%d\n", 0);
	while (argc > 1)
	{
		if (!isNumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
		argc--;
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * isNumber - checks if an entry is a number
 * @number: array
 *
 * Return: true or false
 */
int isNumber(char number[])
{
	int i = 0;

	if (number[0] == '-')
		i = 1;
	for (; number[i] != 0; i++)
	{
		if (!isdigit(number[i]))
			return (0);
	}
	return (1);
}
