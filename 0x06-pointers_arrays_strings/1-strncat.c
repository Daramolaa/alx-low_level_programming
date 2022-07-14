#include "main.h"

/**
 * *_strncat - concatenates two strings
 * but uses, at most, n bytes from src, and src does not need to be
 * null-terminated if it contains n or more bytes
 * @src: string to append to dest
 * @dest: string to concatenate with src
 * @n: number of bytes to append
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
