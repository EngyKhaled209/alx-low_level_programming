#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		if ((m != 'q' && m != 'e') && m <= 'z')
			putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
