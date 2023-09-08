#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C programme using if else
 *
 * Return: this return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf(n, "%i is positive\n");
	else if (n == 0)
		printf(n, "%i is zero\n");
	else if (n < 0)
		printf(n, "%i is negative\n");
	else
		printf("none");
	return (0);
}

