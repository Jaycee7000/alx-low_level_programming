#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, f3 = 0, sum = 0;

	while (f3 <= 4000000)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	if ((f1 % 2) == 0)
	sum += f1;
	}
	printf("%ld\n", sum);
	return (0);
}
