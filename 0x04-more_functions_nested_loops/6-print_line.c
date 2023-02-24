#include "main.h"
/**
 * print_line - Entry point
 * @n: number
 * Return: 0
 */
void print_line(int n)
{
	int c;

	for (; c < n; c++)
	{
		if (n <= 0)
		break;
	_putchar('_');
	}
	_putchar('\n');
}
