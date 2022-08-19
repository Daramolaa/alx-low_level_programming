#include "main.h"
/**
 * clear_bit - a function that setthe value of a bit to 0
 * @n: pointer
 * @index: index
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	if (*n & m)
		*n ^= m;
	return (1);
}
