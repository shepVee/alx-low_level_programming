#include "main.h"

/**
 *string_toupper - changes lowercase to uppercase
 *
 *@v: function parameter
 *
 *Return: pointer to character
 */
char *string_toupper(char *v)
{
	int c = 0;

	while (*(v + c) != '\0')
	{
		if ((*(v + c) >= 97) && (*(v + c) <= 122))
			*(v + c) = *(v + c) - 32;
		c++;
	}

	return (v);
}
