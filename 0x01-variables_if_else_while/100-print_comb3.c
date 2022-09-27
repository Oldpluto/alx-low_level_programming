#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print combination of two digits numbers with comma and space
 *
 * Return: 0 (success)
 */

int main(void)
{
	int c, d;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			if (c < d)
			{
				putchar(c);
				putchar(d);

				if (c != '8' || (c == '8' && d != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

