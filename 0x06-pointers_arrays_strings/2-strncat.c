#include "main.h"

/**
 *_strncpy - concatenates two strings
 *
 *@dest: function parameters
 *@src: function parameter
 *@n: function parameter
 *
 *Return: pointer to a character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int v;

	for (v = 0; v < n && src[v] != '\0'; v++)
		dest[v] = src[v];

	for ( ; v < n; v++)
		dest[v] = '\0';

	return (dest);
}
