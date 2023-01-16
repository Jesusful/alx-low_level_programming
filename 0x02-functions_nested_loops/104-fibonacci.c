#include <stdio.h>
#include <stdlib.h>

/**
 * main - Execution
 */
int main(void)
{
	int add;
	unsigned long fibo = 0, fibo2 = 1, sum;
	unsigned long fibo1_half1, fibo1_half2, fibo2_half1, fibo2_half2;
	unsigned long half1, half2;

	for (add = 0; add < 92; add++)
	{
		sum = fibo + fibo2;
		printf("%lu, ", sum);
		fibo = fibo2;
		fibo2 = sum;
	}
	fibo1_half1 = fibo / 10000000000;
	fibo2_half1 = fibo2 / 10000000000;
	fibo1_half2 = fibo % 10000000000;
	fibo2_half2 = fibo2 % 10000000000;
	for (add = 93; add < 99; add++)
	{
		half1 = fibo1_half1 + fibo2_half1;
		half2 = fibo1_half2 + fibo2_half2;
		if (fibo1_half2 + fibo2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (add != 98)
			printf(", ");
		fibo1_half1 = fibo2_half1;
		fibo1_half2 = fibo2_half2;
		fibo2_half1 = half1;
		fibo2_half2 = half2;
	}
	printf("\n");
	return (0);
}
