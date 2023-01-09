#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Execution begins
 * Return: 0
 */
int main(void)
{
	long a, max;
	long num = 612852475143;
	double sq = sqrt(num);

	for (a = 1; a <= sq; a++)
	{
		if (num % a == 0)
		{
			max = num / a;
		}
	}
		printf("%ld\n", max);
		return (0);
}
