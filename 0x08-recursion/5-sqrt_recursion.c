#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareFunction(n, 0));
}

/**
 * squareFunction - returns the square root of a number
 * @n: test number
 * @x: squared number
 * Return: sqrt of number to -1 for error
 */

int squareFunction(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	else
	{
		if ((x * x) > n)
			return (-1);
		else
			return (squareFunction(n, x + 1));
	}
}
