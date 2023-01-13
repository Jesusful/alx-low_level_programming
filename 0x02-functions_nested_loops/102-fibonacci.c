#include <stdlib.h>
#include <stdio.h>

/**
 * main - Execution
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long k = 1, m = 2;

	for (; i < 50; i++)
	{
		if (i == 0)
			printf("%ld", k);
		else if (i == 1)
			printf(", %ld", m);
		else
		{
			m += k;
			k = m - k;
			printf(", %ld", m);
		}
	}
	printf("\n");
	return (0);
}
