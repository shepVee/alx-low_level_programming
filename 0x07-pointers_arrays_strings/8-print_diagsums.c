#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints sum of two diagonals
 *
 *@a: function parameter
 *@size: function parameter
 *
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, sum = 0, sum2 = 0;

	for (b = 0; b < (size * size); b++)
	{
		if (b % (size + 1) == 0)
			sum = sum + a[b];
		if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
			sum2 = sum2 + a[b];
	}
	printf("%d, %d\n", sum, sum2);
}
