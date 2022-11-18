#include "function_pointers.h"

/**
 *array_iterator - iterates a function
 *@array: array to be iterated
 *@size: size of array
 *@action: pointer to function
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
