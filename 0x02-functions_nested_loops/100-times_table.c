#include "main.h"

/**
 * print_times_table - prints time table n times
 *
 * @n: function parameter
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int sol;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);

			for (j = 1; j <= n; j++)
			{
				sol = i * j;
				_putchar(44);
				_putchar(32);
				if (sol <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(sol + 48);
				}
				else if (sol <= 99)
				{
					_putchar(32);
					_putchar((sol / 10) + 48);
					_putchar((sol % 10) + 48);
				}
				else
				{
					_putchar(((sol / 100) % 10) + 48);
					_putchar(((sol / 10) % 10) + 48);
					_putchar((sol % 10) + 48);
				}

			}
			_putchar('\n');
		}
	}
}
