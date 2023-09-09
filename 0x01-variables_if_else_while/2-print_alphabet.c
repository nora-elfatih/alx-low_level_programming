#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C programme that print alphabet in lowercase
 *
 * Return: This return 0
 */

int main(void)

	char  a;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
