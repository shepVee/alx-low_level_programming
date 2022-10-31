#include "main.h"

/**
 *_strchr - locates a character in a string
 *
 *@s: function parameter
 *@c: function parameter
 *
 *Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	unsigned int v = 0;

	for (; s[v]; v++)
		if (s[v] == c)
			return (s + v);

	if (*(s + v) == c)
		return (s + v);
	return ('\0');
}
