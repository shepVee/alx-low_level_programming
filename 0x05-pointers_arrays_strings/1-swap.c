#include "main.h"

/**
 *swap_int - swaps interger
 *
 *@a: function parameter
 *@b: function parameter
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
