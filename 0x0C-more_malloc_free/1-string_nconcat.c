#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenate strings
 * @s1: first string
 * @s2: second string
 * @n: num of byte
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	if (n > size2)
		n = size2;

	array = malloc(sizeof(char) * (size1 + n + 1));

	if (array == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		array[i] = s1[i];
	}
	for (; i < (size1 + n); i++)
	{
		array[i] = s2[i - size1];
	}
		array[i] = '\0';
	return (array);
}
