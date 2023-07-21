#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Entry point
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int num;

	int j;

	for (j = 0; j < 10; j++)
	{
		for (num = 0; num <= 9; num++)
		{
			_putchar(num + '0');
		}
		if (num >= 9 && num <= 14)
		{
			for (num = 9; num <= 14; num++)
			{
				printf("%d", num);
			}
		}
		_putchar('\n');
	}
}
