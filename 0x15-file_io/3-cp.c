#include "main.h"
void close_f(int fd);
/**
*main - copies the content of a file to another file.
*@ac: the num of argu.
*@av: the string to git and but
*Return: 1 on success, -1 on failure
**/
int main(int ac, char **av)
{
	int f_from, f_to, w, r;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = open(av[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	f_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((r = read(f_from, buffer, 1024)) > 0)
	{
		w = write(f_to, buffer, r);
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	close_f(f_from);
	close_f(f_to);
	return (0);
}

/**
*close_f - to close
*@fd: the file d.
*Return: no return
**/
void close_f(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
