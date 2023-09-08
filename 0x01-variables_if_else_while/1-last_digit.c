#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C programme using if else
 *
 * Return: This return 0
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 5)
		printf("last digit of %lu is %lu and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("last digit of %lu is %lu and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("last digit of %lu is %lu and is less than 6 and not 0\n", n, digit);
	return (0);
}
