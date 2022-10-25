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
	 int count = 0, i;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;

	for (i++; i < count; i++)
		_putchar(s[i]);
	_putchar('\n');
}
