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
	signed int lastDigt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigt = n % 10;
	if (lastDigt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigt);
	} else
	{
		if (lastDigit == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, lastDigt);
		} else
		{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigt);
		}
	}
	return (0);
}
