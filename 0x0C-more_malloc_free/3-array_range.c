#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of intergers
 *
 *@min: min value
 *@max: max value
 *
 *Return: pointer to an interger value
 */
int *array_range(int min, int max)
{
	int *ptr;
	int j, k = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr != NULL)
	{
		for (j = min; j <= max; j++)
		{
			ptr[k] = j;
			k++;
		}
		return (ptr);
	}
	else
		return (NULL);
}
