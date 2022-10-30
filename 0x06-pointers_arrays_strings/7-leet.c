#include "main.h"

/**
 *leet - encodes a string
 *
 *@c: function parameter
 *
 *Return: pointer to character
 */
char *leet(char *c)
{
	int i = 0;
	int j;

	int low[] = {97, 101, 111, 116, 108};
	int high[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(c + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(c + i) == low[j] || *(c + i) == high[j])
			{
				*(c + i) = num[j];
				break;
			}
		}

		i++;
	}

	return (c);
}
