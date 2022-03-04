#include "main.h"

void _printf(const char *format, ...);
char* convert(unsigned int, int);

/**
 * _printf - program startup
 * @format: const being evaluated
(*
 * Description: diy printf function)?
 * Return: returns the specifier to be printed
 */

void _printf(const char *format, ...)
{
	char *array;
	char *string;
	unsigned int x;

	va_list arg;
	va_start(arg, format);

	for (array = format; *array != '\0'; array++)
	{
		while (*array != '%')
		{
			_putchar(*array);
			array++;
		}
		array++;

		switch (*array)
		{
			case 'c' : x = va_arg(arg, int);
				   _putchar(x);
				   break;

			case 'd' : x = va_arg(arg, int);
				   if (x < 0)
				   {
					   x = -x;
					   _putchar('-');
				   }
				   _putchar(convert(x, 10));
				   break;

			case 'i' : x = va_arg(arg, int);
                                   if (x < 0)
                                   {       
                                           x = -x;
                                           _putchar('-');
                                   }       
				   _putchar(convert(x, 10));
                                   break;

			case 's' : string = va_arg(arg, char *);
				   _putchar(string);
				   break;

		}
	}
}

char *convert(unsigned int num, int base)
{
	static char convert[]="0123456789ABCDEF";
	static char buffer[50];
	char *output;

	output = &buffer[49];
	*output = '\0';

	do
	{
		*--output = convert[num%base];
		num /= base;
	}while (num != 0);
	
	return (output);
}
