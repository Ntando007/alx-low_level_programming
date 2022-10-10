#include <stdlib.h>
#include "dog.h"

/**
 * _copy - copy of elements
 * @src: source
 *
 * Return: Success
 */
char *_copy(char *src)
{
  char *p;
  int x;
  int y;

  if (src == NULL)
  {
    return (NULL);
  }

  for (y = 0; src[y] != '\0'; y++)
    ;
  p = malloc(sizeof(char) * (y + 1));

  if (p == NULL)
	{
		return (NULL);
	}

	for (x = 0; src[x] != '\0'; x++)
	{
		p[x] = src[x];
	}

	p[x] = '\0';
	return (p);
}
/**
 * new_dog - create a variable
 * @name: character
 * @age: float
 * @owner: character
 *
 * Return: Success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogname;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dogname = malloc(sizeof(dog_t));
	if (dogname == NULL)
	{
		return (NULL);
	}

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(dogname);
		return (NULL);
	}
	(*dogname).name = new_name;

	(*dogname).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*dogname).name);
		free(dogname);
		return (NULL);
	}
	(*dogname).owner = new_owner;

	return (dogname);
}
