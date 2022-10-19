#include "main.h"
#include "unistd.h"
/**
 *main - prints out putchar
 *
 *Return: Always 0 (Sucess)
 */
int main (void)
{
	int size;
	    int i;

	int print[8] = {95, 112, 117, 116, 99, 104, 97, 114};

	i = 0;
	size = sizeof(print) / sizeof(int);

	while (i < size)
	{
		_putchar(print[i]);
	}

	_putchar('\n');
	return (0);
}

int _putchar(char d)
{
	return (write(1, &d, 1));
}
