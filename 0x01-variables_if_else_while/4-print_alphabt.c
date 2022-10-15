#include <stdio.h>

/**
 *main - printing alphabet without q and e
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == q || i == e)
		{
			continue;
		}

		putchar(i);
	}

	putchar('\n');

	return (0);
}
