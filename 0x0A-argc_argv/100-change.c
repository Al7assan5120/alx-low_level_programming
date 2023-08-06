#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that prints the minimum number of coins.
 * @argc: argument count
 * @argv: argument vector
 * @p: pointer to x
 * @c: pointer to count
 * Return: 0
*/
void coin25(int *p, int *c, int argc, char *argv[]);

int main(int argc, char *argv[])
{
	int i, j, x, coun = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1); }
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("%d\n", (coun));
		return (0); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1); } } }
		coin25(&x, &coun, argc, argv);
	while (x >= 10 && x < 25)
	{
		x = x - 10;
		coun++; }
	while (x >= 5 && x < 10)
	{
		x = x - 5;
		coun++; }
	while (x >= 2 && x < 5)
	{
		x = x - 2;
		coun++; }
	while (x >= 1 && x < 2)
	{
		x = x - 1;
		coun++; }
	printf("%d\n", coun);
return (0); }

/**
 * coin25 - function that prints the minimum number of coins.
 * @argc: argument count
 * @argv: argument vector
 * @p: pointer to x
 * @c: pointer to count
 * Return: no return
*/
void coin25(int *p, int *c, int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	while (*p >= 25)
	{
		*p = *p - 25;
	*c = *c + 1; }
}
