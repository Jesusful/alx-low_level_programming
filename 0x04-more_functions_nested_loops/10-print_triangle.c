#include "main.h"

/**
 * print_triangle - Prnting of tiangles
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int x;
	int k;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (k = size - x; k >= 1; k--)
			{
				_putchar(32);
			}
				for (j = 1; j <= x; j++)
				{
					_putchar(35);
				}
				_putchar('\n');
		}
	}
}
