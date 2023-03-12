#include "main.h"
/**
 * *_strcpy - Entry point
 * @dest: ptr to cahr
 * @src: ptr to char
 * Return: ptr
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (; i >= 0; i--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
