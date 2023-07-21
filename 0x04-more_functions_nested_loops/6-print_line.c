#include <stdio.h>
#include "main.h"
/**
 * print_line - Entry point
 * @n: an integar number
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
