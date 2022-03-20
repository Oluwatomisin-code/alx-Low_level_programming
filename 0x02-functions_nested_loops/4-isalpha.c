#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if parameter is an alphabet
 * @c: function parameter
 * Return; return 1 or 0
 */
int _isalpha(int c)
{
	if ( 'a' <= c <= 'z' || 'A'<= c <= 'Z')
	{
		return (1);
	}
	return(0);
}
