#include <stdio.h>

/**
 *main - print name
 *
 *@argc: number of arguments
 *@argv: array with command arguments
 *
 *Return: Always 0 (Sucess)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
