#include <stdio.h>
#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: first
 * @src: second
 * @n: int
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;

	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
