#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 0; j <= 10; j++)
	{
		putchar(j + '0');

		if (j != 9)
		{
			putchar(',');
			putchar(' ');
			putchar(j + '0');
		}
	}
	putchar('\n');
	return (0);
}
