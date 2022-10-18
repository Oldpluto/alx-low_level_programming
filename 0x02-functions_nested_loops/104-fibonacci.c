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
			printf("%f", j);
		else if (a == 1)
			printf(", %f", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %f", k);
		}
		a++;
	}

	printf("\n");
	return (0);
}
