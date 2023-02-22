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
			_putchar(c + 48);
				if (b == 9)
				break;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			else if (c >= 10 && c < 82)
			{
			_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
				if (b == 9)
				break;
			_putchar(',');
			_putchar(' ');
			}
			else
			{
			break;
			}
		}

	_putchar('\n');
	}
}
