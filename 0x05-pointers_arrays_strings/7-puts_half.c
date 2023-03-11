#include "main.h"
/**
 * puts_half - Entry point
 * @str: ptr to character
 * Return: 0
 */
void puts_half(char *str)
{
	int l = 0;
	int i;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
	for (i = l / 2; i < l; i++)
	{
		_putchar(str[i]);
	}
	}
	else
	{
	for (i = (l / 2) + 1; i < l; i++)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
