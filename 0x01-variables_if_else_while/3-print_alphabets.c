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

	for (c = 'a'; c <= 'z'; C = 'A'; C <= 'Z'; c++, C++)
		putchar(c)
			putchar(C);
	putchar('\n');
	return (0);
}
