#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{

		for (b = 0; b < 10; b++)
		{
			_putchar(((a * b) / 10) + 48);
			_putchar(((a * b) % 10) + 48);
			if (b > 8)
			break;
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
