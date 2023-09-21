#include"main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @n: Input string
 *
 * Return: Return n value
 */

char *leet(char *n)
{
	int i = 0;
	int j = 0;
	char s[] = "aAeEoOtTlL";
	char t[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s[j])
			{
				n[i] = t[j];
			}
		}
	}
	return (n);
}
