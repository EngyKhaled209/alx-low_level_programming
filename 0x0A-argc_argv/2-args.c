#include <stdio.h>
/**
 * main - Entry point
 * @argc: an integar
 * @argv: a character
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
