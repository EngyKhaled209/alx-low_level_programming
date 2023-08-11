#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - Entry point
 * @min: first
 * @max: second
 * Return: Always 0 (success)
 */
int *array_range(int min, int max)
{
	int i, size;

	int *ptr;

	if (min < max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
