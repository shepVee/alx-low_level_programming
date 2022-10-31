#include "main.h"

/**
 *_strspn - gets length of prefix
 *
 *@s: function parameter
 *@accept: function parameter
 *
 *Return: interger value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b;
	unsigned int j;
	unsigned int bool;

	for (b = 0; s[b]; b++)
	{
		bool = 1;
		for (j = 0; accept[j]; j++)
		{
			if (s[b] == accept[j])
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (b);
}
