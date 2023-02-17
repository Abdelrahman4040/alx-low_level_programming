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

	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %zu byte(s)\n", sizeof(inttype));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongint));
	printf("Size of float: %zu byte(s)\n", sizeof(floattype));

	return (0);
}
