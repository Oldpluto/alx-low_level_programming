#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printing Alphabets in Reverse from z-a
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
