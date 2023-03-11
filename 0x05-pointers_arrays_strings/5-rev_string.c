#include "main.h"
/**
 * rev_string - Entry point
 * @s: ptr to character
 * Return: 0
 */
void rev_string(char *s)
{
	int i, length = 0;
	int j;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	j = length - 1;

	for (i = 0; i < j; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
