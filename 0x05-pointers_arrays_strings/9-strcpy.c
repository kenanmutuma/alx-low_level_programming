#include "main.h"

/**
 * _strcpy - copy the string pointed by *str
 * @dest: - the destination
 * @src: the copier
 *
 * Return: this is the copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
