#include <stdio.h>
#include "main.h"

/**
 * print_array - iterates n times through array a and prints them
 * @a: array pointed to
 * @n: number of items to iterate through
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i != (n - 1))
	{
		if (i == (n - 1))
		{
			printf("%u\n", a[i]);
		}
		else
		{
			printf("%u, ", a[i]);
		}
		i++;
	}
}
