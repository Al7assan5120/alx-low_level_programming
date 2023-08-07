#include "main.h"
#include <string.h>
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string
 *
 * Return: int value of palindrime.
 */
int palin(char *s, char *p, char *t, int l)
{
    

    if (l % 2 == 0)
    {
        if (t = &s[l / 2])
        {
            return (1);
        }
        else
        {
            return(palin(s, p - 1, t + 1, l));
        }
        
        if (*t == *p)
        {
            return (1);
        }
        else
        {
            return (0);
        }
        
    }
    
}


int is_palindrome(char *s)
{
    char *p, t;

    int l =strlen(s);

    p = &s[l];
    t = s;

    palin(s, p, t, l);

}
