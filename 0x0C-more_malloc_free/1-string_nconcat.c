#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: if the function fails - NULL.
 * otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *con;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	con = mallaoc(sizeof(char) * (len + 1));

	if (con == NULL)
		return (NULL);
	len = 0;

	for (index = 0; s1[index]; index++)
		con[len++] = s2[index];
	con[len] = '\0';

	return (con);
}
