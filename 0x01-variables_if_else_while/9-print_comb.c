#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all possible single digit
 *
 * Return: 0 (success)
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
