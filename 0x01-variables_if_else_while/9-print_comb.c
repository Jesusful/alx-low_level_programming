#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
/**
 * main - Excellent executer
 * Return: 0
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar((k % 10) + '0');
		if (k != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
