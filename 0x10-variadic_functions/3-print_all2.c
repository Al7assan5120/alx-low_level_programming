#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: the string to print between argu..
 * Return: not return.
 */


/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 */

/*void print_char(va_list argu)
{
	char c;
	c = va_arg(argu, int);
	printf("%c", c);
}*/

/**
 * print_int - Prints an int.
 * @arg: A list of arguments pointing to
 *       the integer to be printed.
 */

/*void print_int(va_list argu)
{
	int i;
	i = va_arg(argu, int);
	printf("%d", i);
}*/

/**
 * print_float - Prints a float.
 * @arg: A list of arguments pointing to
 *       the float to be printed.
 */

/*void print_float(va_list argu)
{
	float f;
	f = va_arg(argu, double);
	printf("%f", f);
}*/

/**
 * print_string - Prints a string.
 * @arg: A list of arguments pointing to
 *       the string to be printed.
 */

/*void print_string(va_list argu)
{
	char *s;
	s = va_arg(argu, char*);
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}*/


void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i = 0;
	const char *p;
	p = format;

	va_start(args, format);
	/*fun print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};*/
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
			printf("%s",(s == NULL) ? "(nil" : s);
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
