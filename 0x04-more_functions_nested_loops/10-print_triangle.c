#include "main.h"
/**
 * print_triangle - Entry point
 * @size: number
 * Return: 0
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
			printf(" ");
			}
			for (c = 1; c <= a; c++)
			{
			printf("#");
			}
		printf("\n");
		}
	}
	else
	{
	printf("\n");
	}
}
