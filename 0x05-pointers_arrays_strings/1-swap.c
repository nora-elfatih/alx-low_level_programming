#include"main.h"

/**
 * swap_int - Swap the value of two integer
 *
 * @a: first parameter
 *
 * @b: Second parameter
 *
 * Return: This return void
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
