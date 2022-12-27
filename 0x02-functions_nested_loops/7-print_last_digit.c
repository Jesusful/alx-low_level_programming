#include "main.h"

/**
 * print_last_digit - last digit printing
 *@k: intergers to print numbers
 *Return: 0
 */
int print_last_digit(int k)
{
	int dn = k % 10;

	if (dn < 0)
		dn *= -1;

	_putchar(dn + '0');
	return (0);
}
