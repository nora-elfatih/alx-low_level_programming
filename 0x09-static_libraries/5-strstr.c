#include"main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @needle: input
 * @haystack: input
 * Return: NULL
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
