#include "main.h"

/**
 *print_triangle - prints triangle
 *
 * @size: function parameter
 *
 * Return: void
 */
void  print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - 1); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}

	_putchar('\n');
}
