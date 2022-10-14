#include <stdio.h>

/**
 * main - Prints alphabet in reverse
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
