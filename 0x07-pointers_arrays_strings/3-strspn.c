#include "main.h"
<<<<<<< HEAD
/**
 * _strspn - gets length of prefix substring
 * @s: initial segment of bytes
 * @accept: bytes
 *
 * Return: bytes
 */
=======

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 * consist only of bytes from accept.
 */

>>>>>>> 4d6b6590ee8c5520abde1b0ad0d3edba11e720f7
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

<<<<<<< HEAD
			else if (accept[i + 1] =='\0')
=======
			else if (accept[i + 1] == '\0')
>>>>>>> 4d6b6590ee8c5520abde1b0ad0d3edba11e720f7
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
