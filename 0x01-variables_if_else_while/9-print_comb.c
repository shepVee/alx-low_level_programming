#include <stdio.h>

/**
 * main - print combination
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar('\n);
		}
	}

	putchar('\n');
	return (0);
}
