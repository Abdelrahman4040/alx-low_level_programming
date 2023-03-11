#include "main.h"
/**
 * puts2 - Entry point
 * @str: ptr to character
 * Return: 0
 */
void puts2(char *str)
{
	int l = 0;
	int i;

	while (str[l] != '\0')
	{
		l++;
	}
	for (i = 0; i <= l - 1; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
