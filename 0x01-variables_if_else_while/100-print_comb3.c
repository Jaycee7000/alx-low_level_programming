#include <stdio.h>

/**
 * main - program prints
 *
 * Description: program that prints all possible
 * different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int f_d;
	int l_d;

	while (c <= 99)
	{
		f_d = (i / 10 + '0');
		l_d = (i % 10 + '0');
		if (f_d < l_d)
		{
			putchar(f_d);
			putchar(l_d);
			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
