#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
		if (i < 9)
		{
			putchar(',');
		}
		putchar(' ');
	}
	return (0);
}
