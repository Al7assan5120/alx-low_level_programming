#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - function that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i, j, k, coun = 0;
    int x = atoi(argv[1]);
    int arr[] = {25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 0; i < argc; i++)
	{
        if (atoi(argv[i]) < 0)
        {
		    printf("%d\n", argc - 1);
		    return (0);
        }
    }
    while (x > 0)
    {
        for (k = 0; k < 4; k++)
        {
            while (x > arr[k])
            {
                x = x - arr[k];
                coun++;
            }
        }
    }
	printf("%d\n", coun);
return (0);
}
