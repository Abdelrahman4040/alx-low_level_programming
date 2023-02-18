#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char end = '\n';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar(end);
	return (0);
}
