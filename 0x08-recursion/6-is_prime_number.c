#include "main.h"

/**
 * is_prime_number - prints prime numbers
 * @n: the number to be printed
 * Return: 1,0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	} else if (n <= 3)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
		int i = 5;

		return (is_prime_number_helper(n, i));
	}

}
