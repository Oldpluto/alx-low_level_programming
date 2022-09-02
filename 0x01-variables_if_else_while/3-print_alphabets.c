#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets in both upper and lower case
 *
 * return: 0 (successful)
 */

int main(void)
{
	char c, C;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
