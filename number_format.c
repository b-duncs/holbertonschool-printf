#include "main.h"

/**
 * number_format - prints integer for printf
 * @args: List of arguments
 * Return: number of arguments printed
 */

int number_format(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _not_putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _not_putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
