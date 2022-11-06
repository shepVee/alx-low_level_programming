#include "main.h"

/**
 *_strcmp - compares two strings
 *
 *@s1: function parameter
 *@s2: function parameter
 *
 *Return: interger
 */
int _strcmp(char *s1, char *s2)
{
	int j = 0;
	int k = 0;

	while (k == 0)
	{
		if ((*(s1 + j) == '\0') && (*(s2 + j) == '\0'))
			break;
		k = *(s1 + j) - *(s2 + j);
		j++;
	}

	return (k);
}
