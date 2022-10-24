#include "main.h"

/**
 *puts_half - prints half of string
 *
 *@s: finction parameter
 *
 *Return: void
 */
void puts_half(char *s)
{
	int i = 0, j;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
			i++;
		}
	}
		if (i % 2 == 1)
			j = i / 2;

		else
			j = (i - 1) / 2;

		for (j++; j < i; j++)
			_putchar(s[j]);
}
