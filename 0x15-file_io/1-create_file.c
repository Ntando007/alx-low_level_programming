#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: empty file
 * Return: 1 (Success) / -1 (NULL)
 */
int create_file(const char *filename, char *text_content);
{
	char k;

	if (filename == NULL)
	{
		return (-1);
	}

	k = touch text_content

	if (k == -1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	text_content = k;

	return (k);
}
