#include "main.h"

/**
 * _isalpha - Prints letter only
 *
 * @c: is a letter and nothing else
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}

	else
		return (0);
}
