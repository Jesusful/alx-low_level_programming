#include "main.h"

/**
 * print_last_digit - Remainder
 *@c: wonderful dividened
 *
 * Return: the value of k
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
