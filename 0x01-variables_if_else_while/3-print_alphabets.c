#include <stdio.h>

/**
 * main - Prints alphabet
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	putchar(lower[i]);

	for (i = 0; i < 26; i++)
	putchar(upper[i]);

	putchar('\n');

	return (0);
}
