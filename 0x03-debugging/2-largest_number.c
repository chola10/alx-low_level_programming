#include "main.h"

/**
 * largest_number - Return the largest number
 * Three integers
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 * Return: laergest integer
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b < c)
			largest = c;
		else
			largest = b;
	}
	return (largest);
}
