#include <stdio.h>
#include "main.h"
/**
 * reverse_array - Entry point
 * @a: an integar array
 * @n: an integar elements
 * Return: Always 0 (success)
 */
void reverse_array(int *a, int n)
{
	int i;

	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
