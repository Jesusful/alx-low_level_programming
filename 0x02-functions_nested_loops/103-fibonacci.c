#include <stdio.h>

/**
 * main - Execution begins for 4000000
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long a = 1, b = 2, bi = b;

	while (b + a < 4000000)
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
