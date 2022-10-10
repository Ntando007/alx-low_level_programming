#include "dog.h"
/**
 * init_dog - initialize variable
 * @d: character
 * @name: character
 * @age: float
 * @owner: character
 *
 * Return: Success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).owner = owner;
		(*d).age = age;
	}
}
