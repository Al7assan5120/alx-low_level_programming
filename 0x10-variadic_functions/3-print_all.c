#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: the string to print between argu..
 * Return: not return.
 */


void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i = 0;
	const char *p;

	p = format;
	va_start(args, format);
	while (*p != '\0')
	{
		switch (*p)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char*);
			printf("%s", (s == NULL) ? "(nil)" : s);
			break;
		}
		if (i < 3 && (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's'))
		{
			printf(", ");
		}
		i++;
		p++;
	}
	printf("\n");
	va_end(args);
}
