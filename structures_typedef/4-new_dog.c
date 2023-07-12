#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - Function that creates a new dog.
 *@name: Dog name
 *@age: Dog age
 *@owner: Dog owner
 *Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copyname, *copyowner;
	int lname = 0, lowner = 0, x;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[lname])
		lname++;
	while (owner[lowner])
		lowner++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	copyname = malloc(lname + 1);
	if (copyname == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (x = 0; name[x]; x++)
		copyname[x] = name[x];
	copyname[x] = '\0';
	copyowner = malloc(lowner + 1);
	if (copyowner == NULL)
	{
		free(copyname);
		free(new_dog);
		return (NULL);
	}
	for (x = 0; owner[x]; x++)
		copyowner[x] = owner[x];
	copyowner[x] = '\0';
	new_dog->name = copyname;
	new_dog->age = age;
	new_dog->owner = copyowner;
	return (new_dog);
}
