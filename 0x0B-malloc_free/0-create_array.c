#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array
 *
 *@size: size of array
 *@c: function parameter
 *
 *Return: Pointer to char
 */
char *create_array(unsigned int size, char c)
{
	int j;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		ptr[j] = c;

	return (ptr);
}
