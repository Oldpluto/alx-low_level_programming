#include "main.h"
#include <stdio.h>

/*
 * _isdigit - Checks for digits from 0-9
 * @c: Value to be checked
 *
 * Return: success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
