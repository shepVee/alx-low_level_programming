#include "main.h"

/**
 *factorial - returns factorial of a given number
 *
 *@n: function parameter (number)
 *
 *Return: int value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
