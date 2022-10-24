#include "main.h"

/**
 *puts2 - prints every othre character of a string
 *
 *@s: function parameter
 *
 *return: void
 */
void puts2(char *s)
{
	int j = 0;

	while (j >= 0)
	{
		if (j % 2 == 0)
			_putchar(s[j]);
		j++;
	}
}
