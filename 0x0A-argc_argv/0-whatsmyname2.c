#include <stdio.h>
#include "main.h"

int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		int j = 0;
		char *p = argv[i];
		while (p[j] != '\0')
		{
			_putchar(p[j]);
			j++;
		}
		_putchar('\n');
	}
return (0);
}
