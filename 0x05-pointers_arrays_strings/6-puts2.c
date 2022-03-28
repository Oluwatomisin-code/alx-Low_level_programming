#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 * @str: parameter pointed to
 */
void puts2(char *str)
{
	int i;

	for(i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}
}
