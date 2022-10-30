#include "main.h"

/**
 *rot13 - encodes string
 *
 *@n: function parameter
 *
 *Return: pointer to char
 */
char *rot13(char *n)
{
	int i = 0;
	int j;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(n + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(n + i) == alph[j])
			{
				*(n + i) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (n);
}

