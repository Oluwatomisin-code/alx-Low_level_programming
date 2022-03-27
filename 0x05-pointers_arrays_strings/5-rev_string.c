#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints a pointer string in reverse
 * @s: pointer string parameter
 */
void rev_string(char *s)
{
	int i = 0;
	int length = 0;
	char c_start, c_end;

	while (s[length] != '\0')
	{
		length++;
	}

	while ((length - 1) > i)
	{
		c_start = s[i];
		c_end = s[length - 1];

		s[i] = c_end;
		s[length - 1] = c_start;
		length--;
		i++;
	}
}
