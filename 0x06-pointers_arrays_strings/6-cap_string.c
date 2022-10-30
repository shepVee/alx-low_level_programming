#include "main.h"

/**
 *cap_string - capitalizes all strings
 *
 *@n: function parameter
 *
 *Return: pointer to a string
 */
char *cap_string(char *n)
{
	int c = 0;
	int v;
	int words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(n + c) >= 97 && *(n + c) <= 122)
		*(n + c) = *(n + c) - 32;
	c++;
	while (*(n + c) != '\0')
	{
		for (v = 0; v < 13; v++)
		{
			if (*(n + c) == words[v])
			{
				if ((*(n + (c + 1)) >= 97) && (*(n + (c + 1)) <= 122))
					*(n + (c + 1)) = *(n + (c + 1)) - 32;
				break;
			}
		}
		c++;
	}
	return (n);
}
