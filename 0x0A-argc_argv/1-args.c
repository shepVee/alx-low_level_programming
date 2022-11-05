#include <stdio.h>

/**
 *main - prints number of arguments
 *
 *@argc: number of arguments
 *@argv: command line arguments
 *
 *Return: Always 0 (sucess)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("argc = %d\n", argc - 1);
	return (0);
}
