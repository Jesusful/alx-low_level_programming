#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Printing only alphabetics
 * Return: 0
 */
int main(void)
{
	char lm;

	for (lm = 'a'; lm <= 'z'; lm++)
	{
		putchar(lm);
	}
	putchar('\n');
	return (0);
}
