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
		if (x >= '9')
		{
			continue;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
