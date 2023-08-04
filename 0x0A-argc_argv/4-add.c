#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) >= 57 && atoi(argv[i]) <= 48)
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
return (0);
}
