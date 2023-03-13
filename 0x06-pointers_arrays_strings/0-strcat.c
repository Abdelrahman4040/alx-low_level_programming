#include "main.h"
/**
 * **_strcat - Entry point
 * @dest: ptr to cahr
 * @src: ptr to char
 * Return: ptr
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	for (; j >= 0; j--)
	{
		dest[i+j] = src[j];
		
	}
	return (dest);
}
