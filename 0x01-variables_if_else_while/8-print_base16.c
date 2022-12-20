#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - execution point
 * Return: 0
 */
int main(void)
{
	int D;

	for (D = 0; D < 10; D++)
	{
		putchar((D % 10) + '0');
	}
	for (D = 'a'; D <= 'f'; D++)
	{
		putchar(D);
	}
	putchar('\n');
	return (0);
}
