#include "main.h"
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
		_putchar('\n');
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			_putchar(' ');
			if (n == 98)
			{
				continue;
			}
			_putchar(',');
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			_putchar(' ');
			if (n == 98)
			{
				continue;
			}
			putchar(',');
		}
		_putchar('\n');
	}
}
