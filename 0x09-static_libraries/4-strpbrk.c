#include "main.h"

/**
 *_strpbrk - searches a string for a set of bytes
 *
 *@s: function parameter
 *@accept: function parameter
 *
 *Return: pointer to char
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int c, k;

	for (c = 0; s[c]; c++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[c] == accept[k])
				return (s + c);
		}
	}
	return ('\0');
}
