#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A programme using write to print a quote
 *
 * Return :This return 1 (not success)
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
		write(1, quo, 59);
	rerturn(1);
}
