#include <stdio.h>

/**
 * main - print
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: 1 byte(s)\n", sizeof(c));
	printf("Size of an int: 4 byte(s)\n", sizeof(i));
	printf("Size of a long int: 4 byte(s)\n", sizeof(li));
	printf("Size of a long long int: 8 byte(s)\n", sizeof(lli));
	printf("Size of a float: 4 byte(s)\n", sizeof(f));
	return (0);
}
