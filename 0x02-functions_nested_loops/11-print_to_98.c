#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 * @n: int parameter passed
 * Return: returns void
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
			printf("%u\n", n);
		else
			printf("%u, ", n);
		n++;
	}
}
