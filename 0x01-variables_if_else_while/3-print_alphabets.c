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
		printf("%c", a);
	for (a = 'A'; a <= 'Z'; a++)
		if (a == 'Z')
			printf("%c\n", a);
		else
			printf("%c", a);
	return (0);
}
