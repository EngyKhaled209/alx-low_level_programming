#include "main.h"
/**
 * print_numbers - Entry point
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
