#include "main.h"

/**
 * print_numbers  -  Print numbers from 0 to 9
 *
 * Return: This Return void
 */

void print_numbers(void)
{
	char  i = '0';

	while  (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
