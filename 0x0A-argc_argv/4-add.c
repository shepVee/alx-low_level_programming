#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - add values
 *
 *@argc: argument count
 *@argv: argumet string
 *
 *Return: Always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	int a, b, sum;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
