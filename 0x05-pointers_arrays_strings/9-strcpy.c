#include "main.h"
/**
 * print_array - Entry point
 * @a: ptr to int
 * @n: number
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	i++;
	for (; i >= 0; i--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
