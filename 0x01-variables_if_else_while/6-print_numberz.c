#include <stdio.h>
#include <time.h>

/**
 * main - print text
 *
 * Return: Always 0
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
