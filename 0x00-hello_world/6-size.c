#include <stdio.h>

/**
 * main - printing size of characters
 * return: 0 if executed correctly and a non-zero otherwise
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of a int: %lu bytes(s)\n", sizeof(i));
	printf("Size of long int: %lu byte(s)\n", sizeof(li));
	printf("Size of long long int: %lu byte(s)\n", sizeof(lli));
	printf("Size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}
