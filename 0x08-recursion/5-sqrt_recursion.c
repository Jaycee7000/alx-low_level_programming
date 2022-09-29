#include "main.h"

/**
 * squareFunction - returns the square root of a number
 * @num: test number
 * @x: squared number
 * Return: sqrt of number to -1 for error
 */

int squareFunction(int num, int x)
{
	if ((x * x) == num)
	{
		return (x);
	}
	else
	{
		if ((x * x) > num)
			return (-1);
		else
			return (squareFunction(num, x + 1));
	}
}

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
