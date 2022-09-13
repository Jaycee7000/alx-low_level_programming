#include <stdio.h>

/**
 * main - print numbers from 0-9
 *
 * Description: Write a program that prints
 * all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
