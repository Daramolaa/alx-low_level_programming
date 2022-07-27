#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * @atoi is a function that convert a string into an int
 * @argc: arguments
 * @argv: aray
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}