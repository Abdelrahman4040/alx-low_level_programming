#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: number
 * Return: 0
 */
void print_diagonal(int n)
{
	int c, b;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
		for (c = 0; c < b; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}

}
