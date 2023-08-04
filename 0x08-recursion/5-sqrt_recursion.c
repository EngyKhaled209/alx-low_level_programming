#include <stdio.h>
#include "main.h"
int actual(int n, int val);
/**
 * _sqrt_recursion - Entry point
 * @n: first int
 * Return: Always 0 (success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual(n, 0));
}
/**
 * actual - second function
 * @n: an integar
 * @val: second integar
 * Return: the sqrt
 */
int actual(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	if (val * val > n)
	{
		return (-1);
	}
	return (actual(n, val + 1))
}
