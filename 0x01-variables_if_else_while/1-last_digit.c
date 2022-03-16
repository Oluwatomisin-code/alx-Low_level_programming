#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of n is %u and is greater than 5\n", n);
	} else
	{
		if (n == 0)
		{
			printf("Last digit of n is %i and is 0\n", n);
		} else
		{
		printf("Last digit of n is %d and is less than 6 and not 0\n", n);
		}
	}
	return (0);
}
