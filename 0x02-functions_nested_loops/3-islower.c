#include "main.h"

/**
 * _islower - function to chech for lowercase char
 * @c: An input character
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
