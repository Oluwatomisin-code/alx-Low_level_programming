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
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %u and is greater than 5\n", n, lastDigit);
	} else
	{
		if (lastDigit == 0)
		{
			printf("Last digit of %d is %u and is 0\n", n, lastDigit);
		} else
		{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
		}
	}
	return (0);
}
