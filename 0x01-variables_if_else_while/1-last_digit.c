#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int las_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	las_digit = n % 10;
	if (las_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, las_digit);
	}
	else if (las_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, las_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, las_digit);
	}
	printf("\n");
	return (0);
}
