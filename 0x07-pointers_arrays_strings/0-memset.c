#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *
 *@s: function parameter
 *@b: function parameter
 *@n: function parameter
 *
 *Return: pointer to character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
