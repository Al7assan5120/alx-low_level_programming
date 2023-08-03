#include "main.h"
#include <string.h>
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
    int l = strlen(s);
    static int i ;
    i = l;
    char *p;

    p = &s[i -1];
	if (*p == s[0])
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*p);
        p--;
        i--;
		_print_rev_recursion(p);
	}
}
