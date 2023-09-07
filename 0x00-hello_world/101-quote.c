#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A programme using write
 *
 * Return :This return 1 (not success)
 */

int main(void)
{
	char count[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
		write(1, count, 59);
	rerturn(1);
}
