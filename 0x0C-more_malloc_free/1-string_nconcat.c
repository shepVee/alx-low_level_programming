#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *
 *@s1: destination
 *@s2: source
 *@n: size of bytes
 *
 *Return: pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length = n, ind;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ind = 0; s1[ind]; ind++)
		length++;

	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr  == NULL)
		return (NULL);

	length = 0;

	for (ind = 0; s1[ind]; ind++)
		ptr[length++] = s2[ind];

	for (ind = 0; s2[ind] && ind < n; ind++)
		ptr[length] = s2[ind];

	ptr[length] = '\0';

	return (ptr);
}
