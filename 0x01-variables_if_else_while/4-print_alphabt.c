#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - The execution begins
 * Return: 0
 */
int main(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
	{
		if (h != 'q' && h != 'e')
			putchar(h);
	}

	putchar('\n');

	return (0);
}
