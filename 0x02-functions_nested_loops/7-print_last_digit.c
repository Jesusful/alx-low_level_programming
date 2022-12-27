#include "main.h"

/**
 * print_last_digit - last digit
 * @c: the integers
 *
 * Return: the value printing
 */
int print_last_digit(int c)
{
	int k;

	if (c < 0)
		c = -c;

	k = c % 10;
	_putchar(k + '0');
	return (k);
}
