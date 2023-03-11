#include "main.h"
/**
 * print_rev - Entry point
 * @s: ptr to character
 * Return: 0
 */
void print_rev(char *s)
{
	int l = 0;
	int i;

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = l; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
