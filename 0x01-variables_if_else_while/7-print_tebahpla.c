#include <stdio.h>

/**
 * main - lowercase alphabet in reverse
 *
 * Description: Write a program that prints
 * the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
