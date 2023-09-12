#include "main.h"

/**
 * print_last_digit -  Print last digit of a number
 *
 * @n: Number to print last digit for
 *
 * Return: Return digit value
 */

int print_last_digit(int n)
{
	int d = n % 10;

	_putchar(d);
	return (d);
}


