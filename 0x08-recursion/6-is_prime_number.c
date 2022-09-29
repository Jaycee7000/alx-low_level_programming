#include "main.h"

/**
 * primeFunction - returns the 1 if n is prime otherwise 0
 * @num: number to be checked
 * @start: number to start checking from
 * Return: 1 if n is prime, 0 otherwise
 */

int primeFunction(int num, int start)
{
	if (start < num)
	{
		if (num % start == 0)
		{
			return (0);
		}
		else
		{
			return (primeFunction(num, start + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - returns the 1 if n is prime otherwise 0
 * @n: number to be checked
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (primeFunction(n, 2));
	}
}
