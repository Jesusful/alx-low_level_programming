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

	k = c % 10;
	if (k < 0)
	{
		k *= -1;
	}
	_putchar(k + '0');
	return (k);
}
