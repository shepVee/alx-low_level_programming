#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocates memory block
 *@ptr: function parameter
 *@old_size: function parameter
 *@new_size: function parameter
 *Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp;
	unsigned int j;
	char *ptr_c, *fill;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		temp = malloc(new_size);

		if (temp == NULL)
			return (NULL);

		return (temp);

	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_c = ptr;
	temp = malloc(sizeof(*ptr_c) * new_size);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fill = temp;

	for (j = 0; j < old_size && j < new_size; j++)
		fill[j] = *ptr_c;

	free(ptr);
	return (temp);
}
