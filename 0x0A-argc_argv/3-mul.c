#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - function that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Error\n");
        return (1);
    }
	int i;
    int x;
    int mul = 1;

	for (i = 1; i < argc; i++)
	{
        x = atoi(argv[i]);

        mul = mul * x;
	}
    printf("%d\n", mul);
return (0);
}
