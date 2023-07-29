#include "main.h"
#include <stdio.h>
/**
*_strcmp - compares two strings.
*@s1: char pointer
*@s2: char pointer
*Return: int value
**/
void reverse_array(int *a, int n)
{
    int *p;

    for (p = a+n-1; p >= a; p--)
    {
        printf("%d", *p);
        if (p == a)
        {
            break;
        }
        printf(", ");
    }
    printf("\n");
}
