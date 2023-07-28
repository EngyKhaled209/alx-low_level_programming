#include <stdio.h>
#include "main.h"
/**
 * string_toupper - Entry point
 * @a: a character
 * Return: Always 0 (success)
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
