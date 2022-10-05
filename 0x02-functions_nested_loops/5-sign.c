#include "main.h"

/**
 * print_sign - printing either + - or 0
 * @n: character 
 *
 * Return: 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	
	if (n = 0)
	{
		_putchar('0');

		return (0);
	}

	else 
	{
		_putchar('-');

		return (-1);
	}
}

