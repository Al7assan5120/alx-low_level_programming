#include "main.h"

/**
*append_text_to_file - that creates a file.
*@filename: name of file to be read.
*@text_content: the text to be append
*Return: 1 on success, -1 on failure
**/

int append_text_to_file(const char *filename, char *text_content)
{
    int fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (text_content != NULL)
		w = write(fd, text_content, strlen(text_content));
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
