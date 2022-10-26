#include "main.h"

/**
 * print_most_numbers - Print most numbers from 0-9
 *
 * Description: Print the numbers except 2 and 4
 *
 * Return: The Numbers from 0-9
 */

void print_most_numbers(void)
{
	int c = 0;

	for (;c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}

	_putchar('\n');
}
