#include "main.h"

/**
 * int _islower - Checks fo lowercase
 *
 * @c: The chracter to be checked
 *
 * Return: Return 1 if c is lowercase else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
