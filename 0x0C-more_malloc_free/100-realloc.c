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

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (temp);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
	}
	else
	{
		temp = malloc(new_size);
		if (ptr != NULL)
		{
			for (j = 0; j < min(old_size, new_size); j++)
				*((char *)temp + j) = *((char *) ptr + j);
			free(ptr);
			return (temp);
		}
		else
			return (NULL);
	}
}

