#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Executiom begins
 * Return: 0
 */
int main(void)
{
	int k, y, z = 0;

	for (; k <= 1024; k++)
	{
		if ((k == 3) || (k == 5))
		{
			z += k;
		}
		printf("%d\n", z);
	}
	return (0);
}
