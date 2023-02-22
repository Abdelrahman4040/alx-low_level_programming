#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: number
 * Return: c
 */
int print_last_digit(int n)
{
	int c;
	if (n >= 0)
	{
		c = n % 10;
		_putchar(c + 48);
	}
	else
	{
		c = -n %10;
		_putchar(c + 48);
	}
	return (c);
}
