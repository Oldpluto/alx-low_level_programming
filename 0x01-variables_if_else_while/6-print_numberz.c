#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print 0-9 without type char
 *
 * Return: 0 (success)
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
