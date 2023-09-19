#include"main.h"

/**
 * rev_string - Reverse a string
 *
 * @s: String input
 *
 * Return: This return void
 */

void rev_string(char *s)
{	int c = 0;
	int a;
	char rev = s[0];

	while (s[c] != '\0')
		c++;
	for (a = 0; a < c ; a++)
	{
		c--;
		rev = s[a];
		s[a] = s[c];
		s[c] = rev;
	}
}
