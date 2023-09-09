#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: programme that print all combination of two numbers
 *
 * Return: This return 0
 */

int main(void)
{
	int a = 0;
	int b = 1;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
