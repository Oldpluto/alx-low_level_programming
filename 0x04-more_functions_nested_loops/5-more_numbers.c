#include "main.h"

/**
 * more_numbers - Print 10 times of 0-9
 *
 * Return: 10 times of 0-9
 */

void more_numbers(void)
{
	int a, c;

	while (a <= 10)
	{
		for (c => 0; c <= 9; c++)
		{
			_putchar(c + '0');
		}

		_putchar('\n');
	}
	++a;
}
