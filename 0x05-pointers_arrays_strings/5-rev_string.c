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
	int i, j;
	char *ptr, temp;

	for (i = 0; i < (i - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(ptr + j);
			*(ptr + j) = *(ptr + (j - 1));
			*(ptr + (j - 1)) = temp;
		}
	}
}
