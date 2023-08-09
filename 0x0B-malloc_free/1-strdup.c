#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Entry point
 * @str: is a char
 * Return: Always 0 (success)
 */
char *_strdup(char *str)
{
	char *new;

	int i, r;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;
	new = malloc(sizeof(char) * (i + 1));

	if (new == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		new[r] = str[r];
	return (new);
}
