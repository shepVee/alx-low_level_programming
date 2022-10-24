#include "main.h"

/**
 *_strlen - counts the number of strings
 *
 *@s: function parameter
 *
 *Return: integer value
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
