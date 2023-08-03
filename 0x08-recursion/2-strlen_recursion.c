#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string
 *
 * Return: int value of length.
 */
int _strlen_recursion(char *s)
{
	static int i = 1;

	if (*s == '\0')
	{
		return (0);
	}
	i++;
	_strlen_recursion(s + 1);
	return (i - 1);
}
