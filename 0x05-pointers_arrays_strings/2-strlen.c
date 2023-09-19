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
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (0);
}
