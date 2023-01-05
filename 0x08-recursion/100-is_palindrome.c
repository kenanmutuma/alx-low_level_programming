#include "main.h"
#include <string.h>
/**
 * is_palindrome - prints words spelt the same
 * @s: string
 * Return: 1
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}
	else if (s[0] != s[length - 1])
	{
		return (0);
	}
	else
	{
		return (is_palindrome(s + 1));
	}
}
