#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: array of strings
 * @argc: count of argv
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
