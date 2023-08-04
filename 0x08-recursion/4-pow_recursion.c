#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - Entry point
 * @x: an integar num
 * @y: second int
 * Return: Always 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * (_pow_recursion(x, y - 1)));
}
