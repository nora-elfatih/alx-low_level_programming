#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A programme that prints all possible comb of two two-digit
 *
 * Return: This return 0
 */

int main(void)
{
	int a = 0;
	int b = a;
	int a_tens = a / 10;
	int a_units = a % 10;
	int b_tens = b / 10;
	int b_units = b % 10;

	for (a = 0; a <= 99; a++)
	{
		for (b = a; b <= 99; b++)
		{
			putchar('0' + a_tens);
			putchar('0' + a_units);
			putchar(' ');
			putchar('0' + b_tens);
			putchar('0' + b_units);
			if (a != 99 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
