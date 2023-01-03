#include "main.h"

/**
 * print_diagonal - prinmting diagonal
 * @n: characters to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int g, k;

	if ((n == 0) || (n < 0))
	{
		_putchar('\n');
	}
	else
	{
		for (g = 0; g < n; g++)
		{
			for (k = 0; k < g; k++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
