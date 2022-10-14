#include <stdio.h>

/**
  * main - Prints lowercase then uppercase
  *
  * Return: Always 0 (Successful)
  */
int main(void)
{
	char c;

	for (c = 'A'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);

}
