#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new a dog
 * @name: dog´s name
 * @age: dog´s age
 * @owner: dog owner
 * Return: struct dog if faill NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogname;
	int i, namelen, ownerlen;

	dogname = malloc(sizeof(*dogname));
	if (dogname == NULL || !(name) || !(owner))
	{
		free(dogname);
		return (NULL);
	}
	for (namelen = 0; name[namelen]; namelen++)
		;

	for (ownerlen = 0; owner[ownerlen]; ownerlen++)
		;

	dogname->name = malloc(namelen + 1);
	dogname->owner = malloc(ownerlen + 1);

	if (!(dogname->name) || !(dogname->owner))
	{
		free(dogname->owner);
		free(dogname->name);
		free(dogname);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		dogname->name[i] = name[i];
		dogname->name[i] = '\0';

		dogname->age = age;

		for (i = 0; i < ownerlen; i++)
			dogname->owner[i] = owner[i];
		dogname->owner[i] = '\0';
		return (dogname);
}
