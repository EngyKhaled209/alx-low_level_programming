#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	while (i <= 9)
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');
	return (0);
}
