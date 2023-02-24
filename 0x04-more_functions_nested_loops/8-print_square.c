#include "main.h"
/**
 * print_square - Entry point
 * @size: number
 * Return: 0
 */
void print_square(int size)
{
	int c, b;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}

}
