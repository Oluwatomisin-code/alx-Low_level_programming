#include "main.h"

/**
 * swap_int - swap the two parameters passed
 * @a: first parameter
 * @b: second parameter
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
