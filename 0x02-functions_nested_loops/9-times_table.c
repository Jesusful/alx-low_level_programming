#include "main.h"

/**
 * times_table - Printing the 9 time table
 */
void times_table(void)
{
	int Z;
	int N;
	int O;
	
	for (Z = 0; Z <= 9; Z++)
	{
		_putchar('0');
		for (N = 0; N <= 9; N++)
		{
			O = Z * N;
			_putchar(O + '0');
			if (O <= 9)
				_putchar(',');
			_putchar(' ');
			_putchar((O / 10) + '0');
		}
	}
}
