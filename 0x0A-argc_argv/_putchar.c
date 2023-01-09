#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *@c: the character to print
 *Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
