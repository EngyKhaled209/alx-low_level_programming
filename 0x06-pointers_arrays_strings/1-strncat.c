#include <stdio.h>
#include "main.h"
/**
 * _strncat - Entry point
 * @src: character
 * @dest: second character
 * @n: integar number
 * Return: Always 0 (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int c;

	while (dest[c])
	{
		c++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[c + i] = src[i];
	}
	dest[c + i] != '\0';
	return (dest);
}
