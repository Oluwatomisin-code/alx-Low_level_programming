#include "main.h"
/**
 * print_to_98 - print from n to 98
 * @n: int parameter passed
 * Return: returns void
 */
void print_to_98(int n)
{
	_putchar(n + '0');
	while (n <= 98)
	{
		n = n++;
		_putchar(n + '0');
	}
}
