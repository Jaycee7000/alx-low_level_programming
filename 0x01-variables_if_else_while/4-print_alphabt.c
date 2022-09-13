#include <stdio.h>

/**
 * main - lowercase and newline
 *
 * Description: Write a program that prints the
 * alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	if (alp != 'e' && alp != 'q')
	{
		putchar(alp);
	}
	}
	putchar('\n');
	return (0);
}
