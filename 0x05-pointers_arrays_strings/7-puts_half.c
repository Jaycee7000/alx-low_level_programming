#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int i, index, half;

	i = strlen(str);
	if (i % 2 == 1)
		index = i / 2 + 1;
	else
		index = i / 2;
	for (half = index; half < i; half++)
		_putchar(str[half]);
	_putchar('\n');
}
