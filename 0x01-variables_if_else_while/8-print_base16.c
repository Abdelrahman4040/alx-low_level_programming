#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char c;

	for (num = 0; num <= 9; num++)
	{
		putchar(48 + num);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);

}
