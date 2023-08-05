#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Entry point
 * @dest: a char
 * @src: second
 * Return: Always 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
