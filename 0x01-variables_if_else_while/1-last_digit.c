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
	las_digit = n%10;
	if (las_digit>5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,las_digit);
	}
	if (las_digit==0)
        {
                printf("Last digit of %d is %d and is 0\n", n,las_digit);
        }
	else ((las_digit<6) && (las_digit!=0))
        {
                printf("Last digit of %d is %d and is greater than 6\n", n,las_digit);
        }
	return (0);
}