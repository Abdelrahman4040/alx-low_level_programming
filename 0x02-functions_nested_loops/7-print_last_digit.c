#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: number
 * Return: c
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (c < 0)
	{
		c = -1 * c;	
	}
	_putchar(c + 48);
	return (c);
}
