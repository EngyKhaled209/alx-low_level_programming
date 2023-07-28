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

	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
