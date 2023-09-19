#include"main.h"

/**
 * _strlen - Count string length
 *
 * @s: String parameter
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
