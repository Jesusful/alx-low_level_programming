#include "main.h"

/**
 * print_last_digit - Printing last digit
 * @c: Integers or digit
 *
 * Return: k
 */
int print_last_digit(int c)
{
	int k;

	if (c < 0)
	{
		c = -c;
		k = c % 10;
		_putchar(k + '0');
	}
	return (k);
}

