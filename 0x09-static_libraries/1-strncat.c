#include "main.h"

/**
 *_strncat - concanatenates two strings
 *
 *@dest: function parameter
 *@src: function parameter
 *@n: function parameter
 *
 *Return: pointer to a character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
			if (*(src + j) == '\0')
				break;
		i++;
		j++;
	}
	return (dest);
}
