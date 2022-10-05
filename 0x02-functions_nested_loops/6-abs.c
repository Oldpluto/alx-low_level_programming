#include "main.h"
#include <stdlib.h>

/**
 * _abs(int) - Print the absolute value of an integer
 *
 * Return: 0 (success)
 */

int _abs(int a)
{
	if (a < 0)
	{
		abs_val = a * -1;
		
		_putchar(abs_val);
		
		return (abs_val);
	}
	return (a);
}
