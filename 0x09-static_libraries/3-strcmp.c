#include <stdio.h>
#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: is first
 * @s2: is second
 * Return: Always 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
