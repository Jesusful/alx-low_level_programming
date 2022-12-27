#include "main.h"

/**
 * print_last_digit - last digit printing
 *@k: intergers to print numbers
 *Return: 0
 */
int print_last_digit(int k)
{
	int M;

	if (k < 0)
		k = -k;
	M = k % 10;
	_putchar(M + '0');
	return (M);
}
