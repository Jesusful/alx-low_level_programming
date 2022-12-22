#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - lowercase alphabet is being printed
 */
void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
