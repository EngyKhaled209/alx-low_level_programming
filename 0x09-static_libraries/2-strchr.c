#include <stdio.h>
#include "main.h"
/**
 * _strchr - Entry point
 * @s: first
 * @c: second
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
