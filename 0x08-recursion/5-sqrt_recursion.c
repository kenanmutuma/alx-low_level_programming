#include "main.h"

/**
 * _sqrt_recursion - prints the perfect square of a number
 * @n: the number
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int i;

		for (i = 1; i <= n / 2; i++)
		{
			if (i * i == n)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}


