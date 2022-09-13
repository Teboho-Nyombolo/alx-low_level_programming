#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	int d;

	for (c = 0; c <= 9; c++)
	{
		for (d = 1; d <= 9; d++)
		{
			if (d > c)
			{
				putchar(c + '0');
				putchar(d + '0');
			}
			if (c != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
