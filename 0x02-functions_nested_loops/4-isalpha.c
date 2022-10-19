#include "main.h"

/**
 * _isalpha - checks lower and upper
 *
 * @c: function parameter
 *
 * Return: Always 1 (Sucess) and 0 (Otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
