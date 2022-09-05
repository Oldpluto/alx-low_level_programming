#include <stdio.h>
#include <stdio.h>

/**
 * main - Prints all alphabets excepts q and e in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <='z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar('a');
		}
	}

	putchar('\n');

	return (0);
}

