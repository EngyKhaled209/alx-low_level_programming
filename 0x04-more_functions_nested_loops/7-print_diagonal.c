#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: an integar number
 * Return: Always 0 (suiccess)
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
		for (j = 0; j <= n; j++)
		{
			for (space = 1; space <= j; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
