#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - used via main.h file
 * main - main function can be found in main.c
 * _putchar function include in main.h writes to std
 * Return: returns nothing, void function
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	 _putchar('\n');
	return;
}
