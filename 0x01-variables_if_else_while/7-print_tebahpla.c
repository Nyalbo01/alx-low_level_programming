#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry returns an alphabet in reverse order
 *
 * return: Always 0
 *
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
