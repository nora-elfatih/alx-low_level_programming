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
	int b = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a != 9 && b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
