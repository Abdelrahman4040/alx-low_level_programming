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
	int n;
	int lastn;

	lastn = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lastn < 6 && lastn > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	}
	else if (lastn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	}
	return (0);
}