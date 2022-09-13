#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		printf("\n");
	}
	return (0);
}
