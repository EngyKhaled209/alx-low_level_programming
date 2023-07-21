#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: an integar number
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int j, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('\\');
			_putchar('\n');
			for (space = 0; space <= j; space++)
			{
				_putchar(' ');
			}
		}
	}
}
