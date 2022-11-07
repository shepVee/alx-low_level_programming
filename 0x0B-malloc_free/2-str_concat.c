#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *
 *@s1: function parameter
 *@s2: function parameter
 *
 *Return: pointer to a string value
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int j, k, l, val;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j]; j++)
		;

	for (k = 0; s2[k]; k++)
		;

	ptr = malloc(sizeof(char) * (j + k + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (l = 0; l < j; l++)
		ptr[l] = s1[l];
	val = k;

	for (k = 0; k < val; l++, k++)
		ptr[l] = s2[k];

	return (ptr);
}
