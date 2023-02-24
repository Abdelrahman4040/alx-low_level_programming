#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: 0
 */
void more_numbers(void)
{
	int n;
	int c;

	for (c = 0; c < 10; c++)
	{

		for (n = 0; n < 15; n++)
		{

			if (n > 9)
			{
			_putchar((n / 10) + 48);
			}

		_putchar((n % 10) + 48);

		}

	_putchar('\n');

	}

}

