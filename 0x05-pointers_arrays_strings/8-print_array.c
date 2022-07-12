#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that print n elements of an array
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d, ", a[c]);
	}
	if (c == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
