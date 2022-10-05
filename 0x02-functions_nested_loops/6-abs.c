#include "main.h"
#include <stdlib.h>

/**
 * _abs - Print the absolute value of an integer
 * @a: just for betty sake lol
 * Return: 0 (success)
 */

int _abs(int a)
{
	if (a < 0)
	{
		int abs_val;

		abs_val = a * -1;

		return (abs_val);
	}
	return (a);
}
