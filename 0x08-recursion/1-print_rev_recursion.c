#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * @s: is a character
 * Return: Always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*c);
	}
}
