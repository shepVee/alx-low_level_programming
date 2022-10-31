#include "main.h"

/**
 *_memcpy - copies memory area
 *
 *@dest: function parameter
 *@src: function parameter
 *@n: function parameter
 *
 *Return: pointer to character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
		dest[b] = src[b];

	return (dest);
}
