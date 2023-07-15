#include <stdio.h>
int main(void)
{
	int i;
	int j;
	int x;
	int y;
	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
 			for (x = '0' ; x <= '9' ; x++)
			{
				for (y = '0' ; y <= '9'; y++)
				{
					if (y == '9' && x == '9')
					{
						y = j+2;
						x = x;
						j = j+1;
						i = i;
					}
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(x);
						putchar(y);
						if (y >= '9' && x >= '9' && j >= '8')
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
