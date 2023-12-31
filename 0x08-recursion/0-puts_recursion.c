#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	char *p = s;

	if (*p == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*p);
		_puts_recursion(p + 1);
	}
}
