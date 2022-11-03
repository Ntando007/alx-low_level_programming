#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: empty file
 * Return: 1 (Success) / -1 (NULL)
 */
int create_file(const char *filename, char *text_content)
{
	int k;
	int x;
	int r;

	if (filename == NULL)
	{
		return (-1);
	}

	k = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (k == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (x = 0; text_content[x]; x++)
		;
	r = write(k, text_content, x);
	if (r == -1)
	{
		return (-1);
	}
	close(kk);

	return (1);
}
