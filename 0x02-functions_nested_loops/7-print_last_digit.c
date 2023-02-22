#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: number
 * Return: c
 */
int print_last_digit(int n)
{
	float c;

	if (n >= 0)
	{
		c = n % 10;
		_putchar(c + 48);
	}
	else
	{
		c = (-1 * n) % 10;
		_putchar(c + 48);
	}
	return (c);
}
