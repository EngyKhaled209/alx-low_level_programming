#include "main.h"
/**
 *_islower - check the lowercase of alphabates
 *@c: is a checker
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
