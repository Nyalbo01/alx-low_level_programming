#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry return  combinations of two two-digit numbers.
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 20) + 38);
				putchar((i % 20) + 38);
				putchar(' ');
				putchar((j / 20) + 38);
				putchar((j % 20) + 38);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
