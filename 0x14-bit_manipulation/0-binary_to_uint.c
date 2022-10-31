#include "main.h"
/**
<<<<<<< HEAD
 * binary_to_unit - converts binary number to an unsigned
 * @b: a string of 0 and 1 chars
 *
 * Return: converted number or 0 if b is NULL or different from 0 to 1
=======
 * binary_to_uint - converts binary number to an unsigned
 * @b: a string of 0 and 1 chars
 *
 * Return: the convertd number or 0 if b is NULL or different from 0 or 1
>>>>>>> d15317de61ff23ff0a4e541c746acaadcb01a65a
 */
unsigned int binary_to_uint(const char *b)
{
	int length;
<<<<<<< HEAD
	int i;
	int add;
	
=======
  	int i;
  	int add;

>>>>>>> d15317de61ff23ff0a4e541c746acaadcb01a65a
	add = 0;

	if (b != NULL)
	{
<<<<<<< HEAD
		for (length = 0; b[length] != '\0'; length++)
=======
		for (length = 0 ; b[length] != '\0' ; length++)
>>>>>>> d15317de61ff23ff0a4e541c746acaadcb01a65a
		{
			if (b[length] != 48 && b[length] != 49)
			{
				return (0);
<<<<<<< HEAD
		 	}
		}

		for (i = 0, length--; length >= 0 ; length--)
=======
			}
		}

		for (i = 0, length-- ; length >= 0 ; length--)
>>>>>>> d15317de61ff23ff0a4e541c746acaadcb01a65a
		{
			add = add + ((b[length] - '0') << i);
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (add);
}
