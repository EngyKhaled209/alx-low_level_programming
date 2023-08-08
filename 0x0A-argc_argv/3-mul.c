#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: an integar num
 * @argv: a string
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		ptintf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
