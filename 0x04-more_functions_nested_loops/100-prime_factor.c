#include <stdio.h>
#include <math.h>

/**
 * main - Execution
 *
 * Return: 0
 */
int main(void)
{
	long k, total;
	long num = 612852475143;
	double sq = sqrt(612852475143);

	for (k = 1; k <= sq; k++)
	{
		if (num % k == 0)
		{
			total = num / k;
		}
	}
		printf("%ld\n", total);
		return (0);
}
