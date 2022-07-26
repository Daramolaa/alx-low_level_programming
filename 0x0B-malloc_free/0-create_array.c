#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of array to be initialized
 * @c: char to initialize array with
 *
 * Return: Null if size is Zero anf if fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int ab;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (ab = 0; ab < size; ab++)
		array[ab] = c;

	return (array);
}
