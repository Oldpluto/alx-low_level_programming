#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints alphabets in both upper and lower case
 *
 * Return: 0 (successful)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
