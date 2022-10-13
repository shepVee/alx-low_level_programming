#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %zu byte\n", sizeof(d));
	printf("Size of an int: %zu byte\n", sizeof(a));
	printf("Size of a long int: %zu byte\n", sizeof(b));
	printf("Size of long long int: %zu byte\n", sizeof(c));
	printf("Size of a float: %zu byte\n", sizeof(f));
	return (0);
}
