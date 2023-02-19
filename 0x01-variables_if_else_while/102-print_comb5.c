#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
		putchar((i / 10) + 48);
		putchar((i % 10) + 48);
		putchar(' ');
		putchar((j / 10) + 48);
		putchar((j % 10) + 48);

		if (i / 10 == 9 && i % 10 == 8 && j / 10 == 9 && j % 10 == 9)
			break;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
