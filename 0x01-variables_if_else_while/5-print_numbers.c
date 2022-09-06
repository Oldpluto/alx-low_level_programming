#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all Single numbers from 0 - 9
 *
 * Return: 0 (success)
 */

int main(void)
{
	int single_num;

	for (single_num = '0'; single_num <= '9'; single_num++)
	{
		printf("%d");
	}

	printf("\n");
	return (0);
}
