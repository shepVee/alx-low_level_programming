#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10 in small case
 *
 * Return: 0 (Sucess)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
