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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n%10>5)
	{
		printf("Last digit of %d is $((n%10)) and is greater than 5\n", n);
	}
	if (n%10==0)
        {
                printf("Last digit of %d is $((n%10)) and is 0\n", n);
        }
	else (n%10<6 && n%10!=0)
        {
                printf("Last digit of %d is $((n%10)) and is greater than 6\n", n);
        }
	return (0);
}