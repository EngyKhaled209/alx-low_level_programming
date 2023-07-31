#include <stdio.h>
#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: first character
 * @src: second character
 * @n: integar
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	int r = n;

	for (i = 0; i < r; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
