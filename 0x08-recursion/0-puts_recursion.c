#include <main.h>
#include <stdio.h>

/*
 * main - check out code
 *
 * Return : 0.
 */

void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s)
}
