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
	int i;
	char a;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}

