#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: the number to be calculated
 * Return: -1 if less than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
