#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: is a character
 * Return: Always 0 (success)
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
