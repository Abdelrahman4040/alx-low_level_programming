#include "main.h"
/**
 * swap_int - Entry point
 * @a: ptr to number
 * @b: ptr to number
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
