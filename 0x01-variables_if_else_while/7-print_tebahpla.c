#include <stdio.h>
#include <stdlib.h>

/**
 *
 * main - Print the alphabets in reverse
 *
 * return; 0 (successs)
 */

int main(void)
{
	char c;

	for (c = 'z'; c <= 'a'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
