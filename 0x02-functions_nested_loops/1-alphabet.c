#include "main.h"

/**
 * print_alphabet(void)  - entry point
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		putchar(la);

	_putchar('\n');
}
