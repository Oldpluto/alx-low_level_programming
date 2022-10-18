#include <stdio.h>

/**
 * main - Prints the sum of multiples of 5 & 3
 *
 * Return: sucessful
 */

int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 3 == 0))
		{
			b += a;
		}

		a++;
	}

	printf("%d\n", b);
	return (0);
}
