#include "main.h"

/**
 * largest_number - returns the largest number
 * @a: first parameter
 * @b: second parameter
 * @c: third parameter
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
