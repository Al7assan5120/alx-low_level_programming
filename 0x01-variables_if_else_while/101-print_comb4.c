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
	int i;

	for (x = '0' ; x <= '9' ; x++)
	{
		for (y = '0' ; y <= '9'; y++)
		{
			for (i = '0' ; i <= '9'; i++)
			{
				if (x != y && x != i && y != i && y > x && i > x && i > y)
				{
					putchar(x);
					putchar(y);
					putchar(i);
					if (i >= '9' && y >= '8' && x >= '7')
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
	}
	putchar('\n');
	return (0);
}
