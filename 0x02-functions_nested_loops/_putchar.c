#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: character to print
 *
 * Return: on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
