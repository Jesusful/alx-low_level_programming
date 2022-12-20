#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - The main entry
 * Return: 0
 */
int main(void)
{
	char hm;

	for (hm = 'a'; hm <= 'z'; hm++)
		putchar(hm);

	for (hm = 'A'; hm <= 'Z'; hm++)
		putchar(hm);

	putchar('\n');
	return (0);
}
