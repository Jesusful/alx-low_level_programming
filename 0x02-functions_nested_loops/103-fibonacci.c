#include <stdio.h>
#include <stdlib.h>

/**
 * main - Execution begins
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long a = 1, b = 2, sum = a + b, bi = b;

	while (sum < 4000000)
	{
		b += a;
		if (b % 2 == 0)
			bi += b;
		a = b - a;
		++i;
	}
	printf("%ld\n", bi);
	return (0);
}
