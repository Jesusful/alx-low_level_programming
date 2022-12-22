#include "main.h"
/**
 * void print_alphabet_x10(void); - alphabet ten times
 */
void print_alphabet_x10(void)
{
	int ten;
	char l;

	for (ten = 0; ten <= 9; ten++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
