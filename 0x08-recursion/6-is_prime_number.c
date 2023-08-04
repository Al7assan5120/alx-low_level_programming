#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: the int number
 *
 * Return: int value if prime number.
 */
int prime_num(int n, int x)
{
    if (n <= 0)
    {
        return (0);
    }
    if (x == 1)
    {
        return (1);
    }
    
    if ((n % x) == 0)
    {
        return (1);
        
    }
    else
    {
        prime_num(n, x-1);
    }
return (1);
}

int is_prime_number(int n)
{
    return (prime_num(n, 2));
}
