#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Execution begins
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i < '8'; i++)
	{
		for (j = i + 1; j < '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				if ((k != j) && (j != i))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8' && k == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
