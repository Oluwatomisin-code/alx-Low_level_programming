#include <stdio.h>

/**
 * main - Entry point
 * diplays alphabet a -z
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a == 'z')
			printf("%c\n", a);
		else
			printf("%c", a);
	return (0);
}
