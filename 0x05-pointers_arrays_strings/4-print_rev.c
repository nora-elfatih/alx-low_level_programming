#include"main.h"

/**
 * print_rev - Print string in reverse
 *
 * @s: Pointer to string
 *
 * Return: This return void
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	while (a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
