#include "main.h"
#include <stdio.h>

/**
 * _isupper - Return 1 if uppercase else 0 if not
 * @c: This is the variable
 *
 * Return: success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{	
		return (0);
	}
}
