#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	char alp;

	if ((alp >= 'a' && alp <= 'z') || (alp >= 'A' && alp <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
