#include "main.h"

/**
 * _islower(int c) - Print 0 or 1
 *
 * Return: 0 or 1
 */

int _islower(int a)
{
	if ((a >= 'a') && (a <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
