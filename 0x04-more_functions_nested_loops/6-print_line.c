#include "main.h"

/**
 * print_line - prints a line n times
 *
 * @n: function parameter
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}

	_putchar('\n');
}

