#include "main.h"

/**
 * print_line - Print a straight line
 * @n: Value to be inputed
 *
 * Return: a straight line or new line only
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		_putchar("_");
	}

	_putchar('\n');
}
