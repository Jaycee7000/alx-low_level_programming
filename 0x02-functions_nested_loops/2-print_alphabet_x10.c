#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alp, i;

	for (i = 0; i <= 9; i++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
