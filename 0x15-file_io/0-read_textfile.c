#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @letters: number of letters
 * @filename: file name
 * @Return: Actual number of letters/ if not 0 or NULL 
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	int r;
	int w;
	int file;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

/* OPEN FILE */
	file = filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

/* READ FILE */
	r = read(file, buffer, letters);
	if (r == -1)
	{
		return (0);
	}

/* WRITE BYTES */
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		return (0);
	}
	close(file);

	return (w);
}
