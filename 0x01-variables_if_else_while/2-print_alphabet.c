#include <stdio.h>
#include <stdlib.h>
/*
 * main - Enrty return alphabet
 * return: Always
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
