#include "main.h"
/**
 * _puts - a function that print a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
