#include "3-calc.h"
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
		int a, b;
		char *op;
		int (*operation)(int, int);

		if (argc != 4)
		{
			printf("Error\n");
			exit(98);
		}
		op = argv[2];
		if (op != '/' || op != '+' || op != '-' || op != '*' || op != '%')
		{
			printf("this Error\n");
			exit(99);
		}
		operation = get_op_func(argv[2]);

			if (operation == NULL)
			{
				printf("Error\n");
				exit(99);
			}

		a = atoi(argv[1]);
		b = atoi(argv[3]);

		printf("%d\n", operation(a, b));
		return (0);
}
