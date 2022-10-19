#include "main.h"

/**
 * _islower - prints characters in lower case
 * @c: interger parameter
 *
 * Return: Always 1 (Sucess) and 0 (Otherwise)
 */
int _islower(int c)
{

		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
