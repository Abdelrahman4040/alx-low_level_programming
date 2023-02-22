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
		int c = a * b;

			if (c < 10)
			{
			_putchar(' ');
			_putchar(c + 48);
			
			}
			else
			{
			_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
			}
		if (b > 8)
		break;
		_putchar(',');
		_putchar(' ');
		}

	_putchar('\n');
	}
}
