#include "main.h"

/**
 * _islower - prints characters in lower case
 * @c: interger parameter
 *
 * Return: Always 1 (Sucess) and 0 (Otherwise)
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c != i)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}
