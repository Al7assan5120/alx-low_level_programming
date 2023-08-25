#include <stdio.h>
#ifndef LISTS_H
#define LISTS_H

typedef struct lists
{
    char * str;
    int len;
    struct lists *next;
}list_t;


int _putchar(char c);
int print_list(const list_t *h);

#endif
