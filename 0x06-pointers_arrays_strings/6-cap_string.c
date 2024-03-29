#include <stdio.h>
#include "main.h"
/**
 * cap_string - Entry point
 * @str: is a string
 * Return: Always 0 (success)
 */
char *cap_string(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			index++;
		}
		if (str[index - 1] == ' ' ||
			str[index - 1] == '\n' ||
			str[index - 1] == '\t' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}' ||
			index == 0)
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
