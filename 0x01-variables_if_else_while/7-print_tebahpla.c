#include <stdio.h>

/**
 * main - Prints alphabet in reverse
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 26; i > 1; i++)
	{
		putchar(alph[i]);
	}

	putchar('\n');

	return (0);
}
