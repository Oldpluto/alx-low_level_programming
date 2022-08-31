#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * more headers goes there
 */

/* main - prints if a random number is either postive, negative, or zero
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */

	if (n > 0)
	{
		printf("%d is postive\n", n);
	}

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
