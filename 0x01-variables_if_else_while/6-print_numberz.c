#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * main - printing numbers
 * Return: 0
 */
int main(void)
{
	int m;

	for (m  = 0; m < 10; m++)
	{
		putchar((m % 10) + '0');
	}

	putchar('\n');

	return (0);
}
