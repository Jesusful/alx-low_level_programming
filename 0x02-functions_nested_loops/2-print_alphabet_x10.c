#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets as desired in occcurence
 */
void print_alphabet_x10(void)
{
	int A;
	char k;

	for (A = 0; A <= 9; A++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		_putchar('\n');
	}
}
