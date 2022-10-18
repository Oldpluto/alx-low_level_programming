#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints th first 98 fib numbers
 *
 * Return: sucess
 */

int main(void)
{
	int a = 0;
	unsigned int j = 1, k = 2;

	while (a < 98)
	{
		if (a == 0)
			printf("%u", j);
		else if (a == 1)
			printf(", %u", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %u", k);
		}
		a++;
	}

	printf("\n");
	return (0);
}
