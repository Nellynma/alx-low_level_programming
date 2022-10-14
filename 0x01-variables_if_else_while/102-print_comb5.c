#include <stdio.h>

/**
  * main - Prints combination of 2 two-digit numbers
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 0; i < 99; i++)
	{
		int j;

		for (j = i + 1; j < 100; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}

	putchar('\n');

	return (0);
}
