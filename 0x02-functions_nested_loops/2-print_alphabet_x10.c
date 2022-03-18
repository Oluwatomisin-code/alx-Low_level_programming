#include "main.h"

/**
 * print_alphabet_x10 - prints alphabbets 10 times
 * uses _putchar function found in _putchar.c
 * check main.h file for _putchar prototype been called
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
