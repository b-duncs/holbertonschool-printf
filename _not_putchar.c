#include "main.h"

/**
 * _not_putchar - print function
 * @c: char being evaluated
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _not_putchar(char c)
{
	return (write(1, &c, 1));
}

