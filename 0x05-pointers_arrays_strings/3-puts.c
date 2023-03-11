#include "main.h"
/**
 * _puts - Entry point
 * @str: ptr to character
 * Return: 0
 */

void _puts(char *str)
{
	char *temp = str;

	while (*temp != '\0')
	{
		_putchar(*temp);
		temp++;
	}
	_putchar('\n');
}
