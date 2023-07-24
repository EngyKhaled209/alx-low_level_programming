#include <stdio.h>
#include "main.h"
/**
 * swap_int - Entry point
 * @a: integar number
 * @b: integar number
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	return (0);
}
