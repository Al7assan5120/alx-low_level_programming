#include <stdio.h>
/**
*main-print numbers of base 16 in lowercase
*
* Return: always return zero
*/
int main(void)
{
	char x;
	char y;

	for (x = '1' ; x <= '9' ; x++)
	{
		putchar(x);
	}
	for (y = 'a' ; y <= 'f' ; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
