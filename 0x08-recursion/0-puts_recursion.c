#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - Entry point
 * @s: is a character
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
