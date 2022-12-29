#include "main.h"

/**
 * print_last_digit - Printing last digit
 * @c: Integers or digit
 *
 * Return: k
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = -c;
	}
	_putchar((c % 10) + '0');
	return (c % 10);
}

