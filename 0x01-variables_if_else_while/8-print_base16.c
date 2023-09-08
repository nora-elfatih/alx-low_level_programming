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
	int n;
	char a;

	for (n = 0; n < 10; n++)
	putchar(n);

	for (a = 'a'; a <= 'f'; a++)
	putchar(a);
	putchar('\n');

	return (0);
}

