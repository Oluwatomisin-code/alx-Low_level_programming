#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string passed to stdout
 * @str: string parameter
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
