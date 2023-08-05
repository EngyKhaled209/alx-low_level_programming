#include <stdio.h>
#include "main.h"
/**
 * _strncpy - Entry point
 * @dest: first
 * @src: second
 * @n: an int
 * Return: Always 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
