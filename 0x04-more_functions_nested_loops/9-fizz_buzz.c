#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}
