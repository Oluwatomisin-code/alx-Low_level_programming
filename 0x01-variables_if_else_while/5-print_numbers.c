#include <stdio.h>

/**
 * main - Entry point
 * diplays alphabet a -z
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		if (a == 9)
			printf("%u\n", a);
		else
			printf("%u", a);
	return (0);
}
