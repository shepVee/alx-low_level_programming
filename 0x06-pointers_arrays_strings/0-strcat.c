#include "main.h"

/**
 *_strcat - joins two strings together
 *
 *@dest: function parameter
 *@src: function parameter
 *
 *Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int num = 0;
	int num2 = 0;

	while (dest[num] != '\0')
	{
		num++;
	}
	while (num2 >= 0)
	{
		dest[num] = src[num2];
		if (src[num2] == '\0')
				break;
				num++;
				num2++;
	}
	return (dest);
}
