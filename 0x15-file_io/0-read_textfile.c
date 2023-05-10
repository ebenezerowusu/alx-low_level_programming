#include "main.h"

/**
 * read_textfile
 * @filename
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ff;
	char *buffer;
	ssize_t r_b, w_b;

	buffer = malloc(sizeof(char) * letters);
	ff = open(filename, O_RDONLY);
	r_b = read(ff, buffer, letters);
	w_b = write(STDOUT_FILENO, buffer, r_b);

	if (buffer == NULL || filename == NULL)
	{
		return (0);
	}

	if (ff == -1)
	{
		free(buf);
		return (0);
	}

	if (r_b == -1)
	{
		free(buffer);
		close(ff);
		return (0);
	}

	if (w_b == -1)
	{
		free(buffer);
		close(ff);
		return (0);
	}

	free(buffer);
	close(ff);
	return (w_b);
}

