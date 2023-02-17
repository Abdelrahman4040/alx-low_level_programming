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
	long int longint;
	long long int longlongint;
	float floattype;

	printf("Size of char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of int: %zu byte(s)\n", sizeof(inttype));
	printf("Size of long int: %zu byte(s)\n", sizeof(longint));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlongint));
	printf("Size of float: %zu byte(s)\n", sizeof(floattype));

	return (0);
}
