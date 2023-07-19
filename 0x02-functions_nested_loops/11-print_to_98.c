#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: an integar number
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
		putchar('\n');
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			putchar(' ');
			if (n == 98)
			{
				continue;
			}
			putchar(',');
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			putchar(' ');
			if (n == 98)
			{
				continue;
			}
			putchar(',');
		}
		putchar('\n');
	}
}
