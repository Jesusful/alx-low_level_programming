#include "main.h"
/*
 * void print_alphabet(void): alphabet printing
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		_putchar('\n');
		l++;
	}
}
