#include <stdio.h>
/**
*main - finds and prints the largest prime factor.
*Return: return zero
**/
int main(void)
{
	int i, var;
	int lpf = 0;
	long n = 612852475143;

	for (i = 2; i <= 100000000; i++)
	{
		if ((n % i) == 0)
		{
			var = i;
			if (var > lpf)
			{
				lpf = var;
			}
		}
	}
printf("%d\n", lpf);
return (0);
}
