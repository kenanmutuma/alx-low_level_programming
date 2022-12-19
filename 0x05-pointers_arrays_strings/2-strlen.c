#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: lengh
 */

void _strlen(char *s)
{
	int string = 0;

	while (*s != '\0')
	{
		string++;
		s++;
	}
	return (string);
}
