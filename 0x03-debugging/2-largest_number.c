#include "main.h"

/**
 * largest_number - returns the largests among numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;
	}
	else  if (b < c)
	{
		if (c > a)
			largest = c;
	}
	else
		largest = b;
	return (largest);
}
