#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	char tmp;
	int i, index, half;

	index = 0;
	half = 0;

	while (s[index] != '\0')
		index++;
	half = index - 1;
	for (i = 0; i < index / 2; i++)
	{
		tmp = s[i];
		s[i] = s[half];
		s[half] = tmp;
		half -= 1;
	}
}
