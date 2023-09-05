#include "main.h"

/**
*create_file - that creates a file.
*@filename: name of file to be read.
*@text_content: the text to be written
*Return: 1 on success, -1 on failure
**/

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, strlen(text_content));
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
