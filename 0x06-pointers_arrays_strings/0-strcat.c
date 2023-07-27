#include <stdio.h>
#include "main.h"
/**
 * *_strcat - Entry point
 * @dest: a character
 * @src: second character
 * Return: Always 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	int c;

	int c1;

	c = 0;
	while (dest[c])
	{
		c++;
	}
	for (c1 = 0; src[c1]; c1++)
	{
		dest[c++] = src[c1];
	}
	return (dest);
}
