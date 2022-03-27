#include "main.h"

/**
 * _strlen - returns the length of a string passed to it
 * @s: is a pointer to the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
