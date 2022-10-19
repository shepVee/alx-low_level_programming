#include <stdio.h>

/**
 * main - printing putchar
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;
	int size;
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
