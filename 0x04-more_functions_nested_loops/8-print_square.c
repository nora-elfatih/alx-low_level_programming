#include"main.h"

/**
 *  print_square - Prints a square, followed by a new line
 *
 *  @size: Is the size of the square
 *
 *  Return: This return void
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	}
}
