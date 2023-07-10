#include "main.h"
#include <stdio.h>
#include "dog.h"
/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: struct
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
