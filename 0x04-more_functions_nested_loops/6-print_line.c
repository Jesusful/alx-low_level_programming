#include "main.h"

/**
 * print_line - line printing
 * @n: numbers of '_' charaters
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
		if ((n == 0) || (n < 0))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
