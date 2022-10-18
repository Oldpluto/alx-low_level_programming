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
	float j = 1, k = 2;

	while (a < 98)
	{
		if (a == 0)
			printf("%ld", j);
		else if (a == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		a++;
	}

	printf("\n");
	return (0);
}
