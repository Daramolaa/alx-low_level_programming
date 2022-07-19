#include "main.h"
/**
 *  * _memset - a function that fills memory with constant byte
 *   * @s: pointed destination
 *    * @b: constant bytes
 *     * @n: bytes
 *      * Return: Always 0
 *       */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
