#include <stdio.h>

/**
 * main - numbers of base 16
 *
 * Description: Write a program that prints all the n
 * umbers of base 16 in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
