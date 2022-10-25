#include "main.h"

/**
 *rev_string - reverses a string
 *
 *@s: function prototype
 *
 *Return: void
 */
void rev_string(char *s)
{
	int length = 0, i, j;
	char *ptr, swap;

	while (length >= 0)
	{
		if (s[length] == '\0')
		break;
		length++;
	}

	ptr = s;


	for (i = 0; i < length - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			swap = *(ptr + j);
			*(ptr + j) = *(ptr + (j - 1));
			*(ptr + (j - 1)) = swap;
		}
	}
}
