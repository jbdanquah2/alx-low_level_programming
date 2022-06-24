#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argv: array of string
 * @argc: count of argv
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	while (argc)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	return (0);
}
