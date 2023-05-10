#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ff, len, write_bytes;

	if (filename == NULL)
		return (-1);

	ff = open(filename, O_WRONLY | O_APPEND);
	if (ff == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(ff);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	write_bytes = write(ff, text_content, len);
	if (write_bytes == -1)
	{
		close(ff);
		return (-1);
	}

	close(ff);
	return (1);
}
