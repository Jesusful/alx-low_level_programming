#include "main.h"

/**
 * print_square - Printing of square
 * @size: sizes
 *
 * Return: void
 */
void print_square(int size)
{
	int k, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
