#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int n = 0;


	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
			n++;
		}
		_putchar(n + 48);

	}
	_putchar('\n');
}
