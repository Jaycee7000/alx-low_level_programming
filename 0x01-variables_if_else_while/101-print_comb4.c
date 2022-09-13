#include <stdio.h>

/**
 * main - print different combination
 *
 * Description: a program that prints all
 * possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int f_d;
	int m_d;
	int l_d;

	while (i <= 999)
	{
		f_d = (i / 100 + '0');
		m_d = (i / 100 % 10 + '0');
		l_d = (i % 10 + '0');
		if ((f_d < m_d) && (m_d < l_d))
		{
			putchar(f_d);
			putchar(m_d);
			putchar(l_d);
			if (c != 789)
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
