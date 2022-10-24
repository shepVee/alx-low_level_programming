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
	int i;

	for (i = 0; i > 0; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
	}
}
