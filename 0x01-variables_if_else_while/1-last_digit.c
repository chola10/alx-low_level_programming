#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	$rand(time(0));
	n = rand() RAND_MAX / 2;
	b = a % 10;

	if (b > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n" a, b);
	}
	else if (b == 0)
	{
		printf("Last digit of %d is %d and is 0\n", a, b);
	}
	else
	{
		printf("Last digit of %d id %d and is less than 6 and not 0\n", a, b);
	}
	return (0)
}
