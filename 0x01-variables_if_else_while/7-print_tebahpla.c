#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - It makes sense when applied
 * Return: 0
 */
int main(void)
{
	char N = 'z';

	while (N >= 'a')
	{
		putchar(N);
		N--;
	}

	putchar('\n');

	return (0);
}
