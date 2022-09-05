#include <stdio.h>
#include <stdio.h>

/**
 * main - Prints all alphabets excepts q and e in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b != 'e' && b != 'q')
		{
			putchar('b');
		}
	}

	putchar('\n');

	return (0);
}

