#include "main.h"
#include <stdio.h>

/**
 * print_to_98
 *
 * @n: Input value
 *
 * Return: Return void
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i < 98; i++)
			printf("%d\n", i);
	}
	printf("98\n");
}
