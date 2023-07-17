#include <stdio.h>
int main(void)
{
	int i;
	int j;
	int x;
	int y;
	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j < '9'; j++)
		{
 			for (x = '0' ; x <= '9' ; x++)
			{
				for (y = '0' ; y <= '9'; y++)
				{
					if (y == '0' && x == '0' && j == '0' && i == '0')
					{
						continue;
					}										
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(x);
					putchar(y);										
					if (y == '9' && x == '9' && j == '8' && i == '9')
						{
							putchar('\n');
							return (0);
						}
					if (y == '9' && x == '9')
						{
							i = i;
							j = j+1;
							x = x;
							y = j;
						}
					if (y >= '9' && x >= '9' && j >= '8' && i >= '9')
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
	return (0);
}
