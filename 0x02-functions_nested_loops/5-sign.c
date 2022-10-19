#include "main.h"

/**
 * print_sign - prints a sign of a number
 *
 * @n: function parameter
 *
 * Return: 1 (if n > zero) and 0 (if n == zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
