#include <unistd.h>

/**
 *_putchar - puts character
 *
 *@n: function parameter
 *
 *Return: int value
 */
int _putchar(char n)
{
	write(1, &n, 1);
}
