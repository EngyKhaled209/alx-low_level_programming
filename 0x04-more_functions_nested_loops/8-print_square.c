#include <stdio.h>
#include "main.h"
/**
 * print_square - Entry point
 * @size: an integar number
 * Return: Always 0 (success)
 */
void print_square(int size)
{
	int j, space;

	for (j = 0; j < size; j++)
	{
		for (space = 0; space < size; space++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
