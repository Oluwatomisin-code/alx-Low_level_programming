#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a pointer string in reverse
 * @s: pointer string parameter
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		printf("%c", s[length - 1]);
		length--;
	}
	printf("\n");
}
