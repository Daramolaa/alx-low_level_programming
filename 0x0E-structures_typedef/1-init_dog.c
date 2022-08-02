#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - a function that initialize a variable
 * @d: structure name
 * @name: char
 * @age: float
 * @owner: char4
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
