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
	int length, i, temp;

	length = _strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
