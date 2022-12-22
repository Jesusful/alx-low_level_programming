#include "main.h"
/**
 * _islower - it print or checks for lowercase character
 * @c: The character
 * Return: 1 if lower, 0 if something else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
