#include <stdio.h>
/**
 * main - prints the alphabet in lower case
 * followed by a new line, except for q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	purchar('\n');

	return (0);
}