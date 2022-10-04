#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	char a;
	a = 0;

	if (a <= 10)
	{

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
	}
}
