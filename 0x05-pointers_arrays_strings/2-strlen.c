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

	counter = strlen(*s);
	return (counter);
}
