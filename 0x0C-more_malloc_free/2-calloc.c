#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory using malloc
 *
 *@nmemb: num elements
 *@size: size of block
 *
 *Return: pointer to address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			ptr[i] = 0;
		return (ptr);
	}
	else
		return (NULL);
}
