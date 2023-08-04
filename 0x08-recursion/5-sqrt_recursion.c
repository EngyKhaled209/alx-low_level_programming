#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - Entry point
 * @n: first int
 * @val: second int
 * Return: Always 0 (success)
 */
int _sqrt_recursion(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (_sqrt_recursion(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
