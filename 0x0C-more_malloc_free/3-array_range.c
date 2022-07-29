#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * array_range - a function that create an array of integer
 * @min: input
 * @max: input
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
		return (NULL);

	for (len = 0; len < (max - min); len++)
		;

	array = malloc(sizeof(int) * (len + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		array[i] = min++;
	}
	return (array);
}
