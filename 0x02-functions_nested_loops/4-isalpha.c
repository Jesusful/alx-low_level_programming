#include "main.h"

/**
 * _isalpha - it checks fo lower or uppercase letters
 * @c: character to check
 *
 * Return: it returns 1 if c is loweer or an uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
