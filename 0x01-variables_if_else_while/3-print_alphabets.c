#include <stdio.h>

/**
 * main - Entry point code
 * prints alphabets in lower and uppercase
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		print("%c", a);
	for (a = 'A'; a <= 'Z'; a++)
		if (a == 'Z')
			print("%c\n", a);
		else
			print("%c", a);
	return (0);
}
