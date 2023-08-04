#include <stdio.h>
#include "main.h"
int actual(int n, int i);
/**
 * is_prime_number - Entry point
 * @n: an integar
 * Return: Always 0 (success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual(n, n - 1));
}
/**
 * actual - Entry point
 * @n: an integar
 * @i: second int
 * Return: Always 0 (success)
 */
int actual(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual(n, i - 1));
}

