#include "main.h"
/**
 * _abs - Entry point
 * @c: the integar number
 * Return: Always 0 (success)
 */
int _abs(int c)
{
	int abs;

	if (c < 0)
	{
		abs = -1 * c;
		return (abs);
	}
	return (0);
}
