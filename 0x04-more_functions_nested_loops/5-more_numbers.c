#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Entry point
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int num;

	int j, count;

	for (j = 0; j < 10; j++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
