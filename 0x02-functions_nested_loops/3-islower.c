#include <ctype.h>
#include "main.h"

/**
 * _islower - this function uses the islower function
 * of the stdlib to validate char case
 * @c: The alphabet is received as an int and
 * converted to its ansii equivalent for the check
 * Return: no return
 */
int _islower(int c)
{
	return (islower(c));
}
