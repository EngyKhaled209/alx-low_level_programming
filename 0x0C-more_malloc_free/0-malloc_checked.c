#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Entry point
 * @b: an int
 * Return: Always 0 (success)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
