#include "main.h"
/**
 * _strlen - Entry point
 * @s: ptr to character
 * Return: 0
 */

int _strlen(char *s)
{
	char *temp = s;
	int n;

	while (*temp != '\0')
	{
		temp++;
	}

	n = temp - s;
	return (n);
}
