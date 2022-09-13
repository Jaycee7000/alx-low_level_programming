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
	char low;

	for (low = 'a'; low <= 'z'
; low++)
	{
		putchar(low);
		printf("\n");
	}
	return (0);
}
