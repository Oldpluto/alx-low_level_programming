#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	char a;
	int c = 0;

	while (c <= 9)
	{

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
	}
	c++;
}
