#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: the string to print
 * @src: the source string to copie
 * @n: the size of the memory to print
 *
 * Return: char pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
