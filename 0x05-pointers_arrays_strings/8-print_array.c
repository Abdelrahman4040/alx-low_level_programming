#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @a: ptr to int
 * @n: number
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
		break;
		printf(", ");
	}
	printf("\n");
}
