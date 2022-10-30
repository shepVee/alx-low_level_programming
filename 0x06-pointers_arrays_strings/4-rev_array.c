#include "main.h"

/**
 *reverse_array - reverses array
 *
 *@a: function parameter
 *@n: function parameter
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int v, temp, k;

	for (v = 0; v < n - 1; v++)
	{
		for (k = v + 1; k > 0; k--)
		{
			temp = *(a + k);
			*(a + k) = *(a + (k - 1));
			*(a + (k - 1)) = temp;
		}
	}
}
