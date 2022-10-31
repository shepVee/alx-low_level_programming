#include "main.h"
#include <unistd.h>

/**
 *_putchar - puts character
 *
 *@d: function parameter
 *
 *Return: int
 */
int _putchar(char d)
{
	return (write(1, &d, 1));
}

