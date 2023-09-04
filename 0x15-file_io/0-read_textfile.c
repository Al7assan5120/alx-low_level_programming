#include "main.h"

/**
*read_textfile - that reads a text file and prints it.
*@filename: name of file to be read.
*@letters: the number of letters to read and print
*Return: no return
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr, let;
	char *t;

	t = malloc(sizeof(char) * letters);
	if (t == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	let = read(fd, t, letters);
	wr = write(STDOUT_FILENO, t, letters);
	if (wr == -1)
		return (0);

	close(fd);
	free(t);
	return (let);
}
