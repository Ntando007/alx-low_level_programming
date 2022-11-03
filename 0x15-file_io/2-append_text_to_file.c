#include "main.h"
/**
 * append_text_to_file - appends text to end of file 
 * @filename: file name * @text_content: empty file
 * Return: 1 (Succes) / -1 (NULL)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ap;
	int r;


	if (text_content == NULL)
	{
		text_content = "";
	}

	for (r = 0; text_content[r] != '\0'; r++)
		;

	/* OPEN FILE */

	ap = open(filename, O_WRONLY | O_APPEND);
	
	if (ap == -1)
	{
		return (-1);
	}

	/* WRITES */
	write(ap, text_content, r);

	close(ap);
	return (1);

	if (filename == NULL)
	{
		if (filename != NULL)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
}
