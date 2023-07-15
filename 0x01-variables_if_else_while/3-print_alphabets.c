#include <stdio.h>
/**
*main-print alphabet lowercase & uppercase
*
* Return: always return zero
*/
int main(void)
{
	char x;
	char y;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	for (y = 'A' ; y <= 'Z' ; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
