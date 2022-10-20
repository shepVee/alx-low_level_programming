#include "main.h"

/**
 * times_table - print times table nine times
 *
 * Return: 0
 */
void times_table(void)
{
	int a;
	int b;
	int val;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			_putchar(' ');
			_putchar(',');
			val = a * b;

			if (val <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((val / 10) + '0');
			}
			_putchar((val % 10) + '0');
		}
		_putchar('n');
	}
}
