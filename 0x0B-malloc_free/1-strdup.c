#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns pointer to newly allocated space
 *
 *@str: string
 *
 *Return: pointer to character
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int j, k;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		;

	ptr = (char *)malloc(sizeof(char) * (j + 1));

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k <= j; k++)
		ptr[k] = str[k];

	return (ptr);
}
