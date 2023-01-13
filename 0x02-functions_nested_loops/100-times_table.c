#include "main.h"

/**
 * print_times_table - Printing times table
 * @n: The value to be printed
 */
void print_times_table(int n)
{
	int k, m, l;

	if (n >= 0 && n <= 15)
	{
		for (k = 0; k <= n; k++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				l = k * m;
				if (l <= 9)
					_putchar(' ');
				if (l <= 99)
					_putchar(' ');
				if (l >= 100)
				{
					_putchar((l / 100) + '0');
					_putchar(((l / 10) % 10) + '0');
				}
				else if (l >= 10 && l <= 99)
				{
					_putchar((l / 10) + '0');
				}
				_putchar((l % 10) + '0');
			}
			_putchar('\n');
		}
	}
}


