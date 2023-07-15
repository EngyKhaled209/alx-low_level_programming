#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	char me;

	i = 'a';
	me = 'A';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (me <= 'Z')
	{
		putchar(me);
		me++;
	}
	putchar('\n');
	return (0);
}


