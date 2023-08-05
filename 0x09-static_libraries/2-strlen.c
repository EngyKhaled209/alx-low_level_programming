#include <stdio.h>
#include "main.h"
/**
 * _strlen - Entry point
 * @s: a char
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
