#include <stdio.h>
/**
*main-print single-digit numbers
*
* Return: always return zero
*/
int main(void)
{
	int x;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
