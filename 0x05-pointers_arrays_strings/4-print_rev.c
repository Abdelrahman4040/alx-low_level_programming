#include "main.h"
/**
 * print_rev - Entry point
 * @s: ptr to character
 * Return: 0
 */
void print_rev(char *s)
{
	char *temp = s;
	int i;

	while (*temp != '\0')
	{
		temp++;
	}
	for (i = temp - s; i > 0; i--)
	{
		_putchar(*temp);
		temp--;
	}
	_putchar('\n');
}
