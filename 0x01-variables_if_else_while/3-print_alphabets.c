#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	char me = 'A';

	while (me <= 'Z')
	{
		putchar(me);
		me++;
	}
	putchar('\n');
	return (0);
}


