#include <stdio.h>
/**
 * main - Entry point
 * printing size of various types of c
 * Return: Always 0(success)
 */
int main(void)
{
	char c;
	int i;
	long int lint;
	long long llint;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lint));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llint));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

