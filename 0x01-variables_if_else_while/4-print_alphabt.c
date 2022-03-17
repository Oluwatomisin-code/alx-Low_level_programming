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
		if (a != 'q' || 'e')
		{
			if (a == 'z')
				putchar("%c\n", a);
			else
				putchar("%c", a);
		}
	return (0);
}
