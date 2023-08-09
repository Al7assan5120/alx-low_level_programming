#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the num. of argument
 *@av: the string in argument
 * Return: char pointer.
 */
char *argstostr(int ac, char **av)
{
	int i;
	unsigned int j, k = 0, l = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 1; i <= ac; i++)
	{
		if (av[i] == NULL)
		{
			av[i] = "";
		}
	}
	for (i = 0; i < ac; i++)
	{
		l += strlen(av[i]);
	}
	p = (char *)malloc((l + ac +1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
		/*exit(1);*/
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]) ; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
return (p);
}
