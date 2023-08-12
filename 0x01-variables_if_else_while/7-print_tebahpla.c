#include <stdio.h>
#include <time.h>

/**
 * main - print text
 *
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	}
	putchar('\n');

	return (0);
}
