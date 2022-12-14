#include  "main.h"
/**
 * _islower - checks if a character is  lowerwcase
 * @c: the character
 * Return: 1 if letter is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
