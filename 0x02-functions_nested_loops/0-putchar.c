#include "main.h"
#include "putchar.c"
/**
 * main - prints _printchar
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int size;
	int i;
	i = 0;

	int print[8] = {95, 112, 117, 116, 99, 104, 97, 114};
	size = sizeof(print) / sizeof(int);

	while (i < size)
	{
		_putchar(print[i]);
	}

	_putchar('\n');
	return (0);
}
