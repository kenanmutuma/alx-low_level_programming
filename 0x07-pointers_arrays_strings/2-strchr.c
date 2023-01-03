#include "main.h"

/**
 * strchr - string character
 * @s: string
 * @c: another char
 * Return: string
 */

char *strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}

