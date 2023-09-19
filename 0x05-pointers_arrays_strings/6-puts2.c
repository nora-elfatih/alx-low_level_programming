#include"main.h"

/**
 * puts2 - Prints every other character of a string
 *
 * @str: string input
 *
 * Return: This return void
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar('\n');
}
