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
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			_putchar('\n');
			break;
		}

		if (count % 2 == 0)
			_putchar(s[count]);
		count++;
	}
}
