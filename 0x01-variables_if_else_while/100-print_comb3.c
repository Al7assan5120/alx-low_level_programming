#include <stdio.h>
/**
*main-print all possible different combinations of two digits
*
* Return: always return zero
*/
int main(void)
{
	int x;
	int y;

	for (x = '0' ; x <= '9' ; x++)
	{
		for (y = '0' ; y <= '9'; y++)
		{
			if (x != y && y > x)
			{
				putchar(x);
				putchar(y);
				if (y >= '9' && x >= '8')
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
