#include "main.h"
/**
 * _isdigit - Entry point
 * @c: an integar number
 * Return: Always 0 (success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
