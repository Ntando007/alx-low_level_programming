#include "main.h"
#include <stdlib.h>

/**
 *_strdup - allocate a string.
 *@str: string.
 *Return: pointer to string if success.
*/

char *_strdup(char *str)
{
	char *s;
	int i;


	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	;
	i++;
	s = malloc(sizeof(char) * i);

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
