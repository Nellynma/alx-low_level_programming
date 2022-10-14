#include <stdio.h>

/**
  * main - Prints letters in lowercase
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar ('\n');

	return (0);
}
