#include "main.h"

/**
 * print_numbers - Print 0 - 9
 *
 * Return: The numbers from 0-9 success
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}

	_putchar('\n');
}

