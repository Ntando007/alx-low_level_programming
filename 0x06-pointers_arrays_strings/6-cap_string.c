#include "main.h"

/**
 * cap_string - Capitalizes words
 * @str: string to be capitalized.
<<<<<<< HEAD
 * 
=======
 *
>>>>>>> 7b420e233b1803f879f89eb270be75c6c6f5a3e0
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int i = 0;
<<<<<<< HEAD
=======

>>>>>>> 7b420e233b1803f879f89eb270be75c6c6f5a3e0
	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (str[i - 1] == ' ' ||
		    str[i - 1] == '\t' ||
		    str[i - 1] == '\n' ||
<<<<<<< HEAD
	            str[i - 1] == ',' ||
=======
		    str[i - 1] == ',' ||
>>>>>>> 7b420e233b1803f879f89eb270be75c6c6f5a3e0
		    str[i - 1] == ';' ||
		    str[i - 1] == '.' ||
		    str[i - 1] == '!' ||
		    str[i - 1] == '?' ||
		    str[i - 1] == '"' ||
		    str[i - 1] == '(' ||
		    str[i - 1] == ')' ||
		    str[i - 1] == '{' ||
		    str[i - 1] == '}' ||
		    i == 0)
			str[i] -= 32;
<<<<<<< HEAD
		i++;
	}
=======

		i++;
	}

>>>>>>> 7b420e233b1803f879f89eb270be75c6c6f5a3e0
	return (str);
}
