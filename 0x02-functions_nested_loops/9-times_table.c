#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Return void
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (b = 0; b <= 9; b++)
		{
			c = (a * b);

			if ((c / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar ((c % 10) + '0');
		}
	}
}
