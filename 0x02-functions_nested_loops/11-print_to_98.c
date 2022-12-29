#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - Printing integers to 98
 * @n: The integers
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
			printf("%d", n);
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
			printf("%d", n);
		}
	}
}
