#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string pointed to
 */
void puts_half(char *str)
{
	int length = 0;
	int i, half;

	while (str[length] != '\0')
	{
		length++;
	}

	half = (length - 1) / 2;
	for (i = (half + 1); i <= (length - 1); i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
