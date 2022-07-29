#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - a function that reallocate a memory
 * @ptr: pointer
 * @old_size: input
 * @new_size: input
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array, *src;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	array = malloc(new_size);
	if (array == NULL)
		return (NULL);

	src = ptr;

	for (i = 0; i < new_size && i < old_size; i++)
		array[i] = src[i];
	free(ptr);

	return (array);
}
