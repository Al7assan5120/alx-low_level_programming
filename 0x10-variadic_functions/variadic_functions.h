#include <stdarg.h>
#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*typedef struct main
{
    char symbols;
    void(*f)(va_list argu);
}fun;*/
void print_char(va_list argu);
void print_int(va_list argu);
void print_float(va_list argu);
void print_string(va_list argu);

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
