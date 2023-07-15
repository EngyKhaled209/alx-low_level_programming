#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	char m;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	m = 97;
	while (m <= 102)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}

