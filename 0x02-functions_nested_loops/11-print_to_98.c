#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 * @n: int parameter passed
 * Return: returns void
 */
void print_to_98(unsigned int n)
{
	while (n < 98)
	{
		printf("%u, ", n);
		n = n + 1;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n = n + 1;
	}
	if (n == 98)
	{
		printf("%u\n", n);
	}
}
