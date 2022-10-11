#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: element
 *
 * Return: Success
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
<<<<<<< HEAD

=======
>>>>>>> 4f67023605a0d15534217bf8f6a33522a00f346f
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
<<<<<<< HEAD
}
=======
}			       
>>>>>>> 4f67023605a0d15534217bf8f6a33522a00f346f
