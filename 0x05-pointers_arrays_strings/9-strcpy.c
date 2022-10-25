#include "main.h"

/**
 *_strcpy - copies string to another
 *
 *@dest: where string is copied to
 *@src: string being copied
 *
 *Return: pointer to a char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			break;
		}
			i++;
	}

	return (dest);
}
