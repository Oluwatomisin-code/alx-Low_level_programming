#include "main.h"

/**
 * print_alphabet_x10 - prints alphabbets 10 times
 * uses _putchar function found in _putchar.c
 * check main.h file for _putchar prototype been called
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char a;
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
