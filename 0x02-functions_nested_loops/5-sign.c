#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: n is a parameter signifying the received num
 * Return: returns 0,1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (+1);
	}

	if (n < 0)
	{
		return (-1);
	}
	return (0);
}
