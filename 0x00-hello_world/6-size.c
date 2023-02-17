#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int inttype;
	char chartype;
	float floattype;
	double doubletype;
	printf("Size of int: %zu bytes\n", sizeof(inttype));
	printf("Size of char: %zu bytes\n", sizeof(chartype));
	printf("Size of float: %zu bytes\n", sizeof(floattype));
	printf("Size of double: %zu bytes\n", sizeof(doubletype));
	return (0);
}
