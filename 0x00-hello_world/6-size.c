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

	printf("Size of a char: %c byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", sizeof(lint));
	printf("Size of a long long int: %lli byte(s)\n", (unsigned long)sizeof(llint));
	printf("Size of a float: %f byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

