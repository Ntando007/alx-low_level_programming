#include "main.h"
/**
 * append_text_to_file - appends text to end of file 
 * @filename: file name
 * @text_content: empty file
 * Return: 1 (Succes) / -1 (NULL)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ap;
	int r;
	int w;
	char *buffer = malloc(sizeof(char) * text_content);

	if (ap == NULL)
	{
		return (-1);
	}

	/* OPEN FILE */

	ap = open(filename, O_RDWR | O_APPEND)
	
	if (ap == NULL)
	{
		return (-1);
	}

	/* READ FILE */

	r = read(ap, buffer, text_content);
	
	if (r == NULL)
	{
		return (-1);
	}

	/* WRITES */
	w = write(STDOUT_FILENO, buffer, r);
	if (w == 1)
	{
		return (1);
	}
	close(ap);
	return (w);
}
