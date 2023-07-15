#include <stdio.h>
/**
*main-print lowercase alphabet in reverse
*
* Return: always return zero
*/
int main(void)
{
	char x;

	for (x = 'z' ; x >= 'a' ; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
