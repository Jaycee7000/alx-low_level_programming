#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int inc;
	unsigned long f1 = 0, f2 = 1, f3;

	for (inc = 0; inc < 50; inc++)
	{
		f3 = f1 + f2;
		printf("%lu", f3);
		f1 = f2;
		f2 = f3;
	if (inc == 49)
		printf("\n");
	else
		printf(", ");
	}
	return (0);
}
