#include "main.h"
#include <stdio.h>

/**
 * times_table - prints times table from 0 to 9
 * Return: returns void
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 12; i++)
	{
		int j;

		for (j = 0; j < 9; j++)
		{
			printf("%d, ", (i * j));

		}
		printf("\n");
	}
}
