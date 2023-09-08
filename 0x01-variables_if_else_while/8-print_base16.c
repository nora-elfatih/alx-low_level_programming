#include<stdio.h>

/**
 * main - Entry poinnt
 *
 * Description: A Programme that prints Hexadecimal numbers
 *
 * Return: This return 0
 */

int main(void)
{
	int n = 0;
	char a = 'a';

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

