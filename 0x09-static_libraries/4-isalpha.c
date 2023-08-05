#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point
 * @c: an int
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
