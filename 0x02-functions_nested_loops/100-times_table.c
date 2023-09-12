#include "main.h"

/**
 * print_times_table  -  Prints times tables of n
 *
 * starting with 0
 *
 * @n: vailue to be print
 */

void print_times_table(int n)
{
	int l;
	int m;
	int o;

	if (n >= 0 && n <= 15)
	{
		for (l = 0; l <= n; l++)
		{
			_putchar('0');

			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				o = l * m;

				if (o <= 9)
					_putchar(' ');
				if (o <= 99)
					_putchar(' ');

				if (o >= 100)
				{
					_putchar((o / 100) + '0');
					_putchar((o / 100) % 10 + '0');
				}
				else if (o <= 99 && o >= 10)
				{
					_putchar((o / 10) + '0');
					_putchar((o % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

