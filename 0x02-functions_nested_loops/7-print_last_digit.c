#include "main.h"
/**
 * print_last_digit - Entry point
 * @c: the intger number
 * Return: Always 0 (success)
 */
int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;
	if (c < 0)
	{
		last_digit = -1 * last_digit;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
