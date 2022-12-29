#include "main.h"

/**
 * times_table - Printing the 9 time table
 */
void times_table(void)
{
	int Z, N, O;
	
	O = Z * N;
	for (Z = 0; Z <= 9; Z++)
	{
		_putchar('0');
		for (N = 0; N <= 9; N++)
		{
			_putchar(',');
			_putchar(' ');
			if (O <= 9)
				_putchar(' ');
			else
				_putchar((O / 10) + '0');
		}
	}
}
