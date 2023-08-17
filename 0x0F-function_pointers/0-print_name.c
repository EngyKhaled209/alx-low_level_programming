#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Entry point
 * @name: first input
 * @f: second input
 * Return: Always 0 (success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
