#include <stdio.h>

/**
 * main - prints numbers from 0 - 10
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	putchar('0' + i);

	putchar('\n');

	return (0);
}
