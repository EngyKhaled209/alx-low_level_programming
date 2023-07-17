#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + 48);
		if (i < 9)
		{
			putchar(44);
		}
		 i++;
		 putchar(32);
	}
	return (0);
}
