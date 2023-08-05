#include <stdio.h>
#include "main.h"
/**
 * _strcat - Entry point
 * @dest: fiest
 * @src: second
 * Return: Always 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		i++;
		j++;
	}
	return (dest);
}
