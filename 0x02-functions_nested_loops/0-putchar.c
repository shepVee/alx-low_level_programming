#include <stdio.h>

/**
 *main - prints out putchar
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{
	int size;
	    int i;

	int print[8] = {95, 112, 117, 116, 99, 104, 97, 114};

	i = 0;
	size = sizeof(print) / sizeof(int);

	while (i < size)
	{
		putchar(print[i]);
	}

	putchar('\n');
	return (0);
}
