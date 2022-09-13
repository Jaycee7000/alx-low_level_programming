#include <stdio.h>

/**
 * main - lowercase and uppercase
 *
 * Description: Write a program that prints the alphabet in 
 * lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (alp = 'A'; alp <= 'Z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
