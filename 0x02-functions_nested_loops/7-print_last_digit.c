#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - returns last digit of a number
 * @n: parameter passed to function
 * Return: returns last digit of param n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n > 0)
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
	last_digit = (-1 * last_digit);
	_putchar(last_digit + '0');
	return (last_digit);
}
