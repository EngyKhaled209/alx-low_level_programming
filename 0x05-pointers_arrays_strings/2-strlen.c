#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen - Entry point
 * @s: the string
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
	{
		++counter;
	}
	return (counter);
}
