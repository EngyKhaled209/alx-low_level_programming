#include <stdio.h>
#include "main.h"
/**
 * _memset - Entry point
 * @s: first character
 * @b: second character
 * @n: integar number
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

