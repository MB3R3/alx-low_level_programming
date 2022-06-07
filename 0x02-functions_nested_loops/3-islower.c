#include "main.h"
/**
 * _islower - a function that checks for a lowercase character
 * @c: character to check
 * Return 1 if 'c' is lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);

	else

		return (0);
}
