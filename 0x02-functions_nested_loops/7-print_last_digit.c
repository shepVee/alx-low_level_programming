#include "main.h"

/**
 * print_last_digit - prints last digit of numbers
 *
 *@b: function parameter
 *
 *Return: Always 0 (Sucess)
 */
int print_last_digit(int b)
{
	int c = b % 10;

	if (c < 0)
	{
		c = c * -1;
		_putchar(c + '0');
	}
	else
	{
		_putchar(c + '0');
	}

	return (c);
}
