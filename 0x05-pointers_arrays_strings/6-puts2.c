#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
