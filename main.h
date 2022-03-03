#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct print - struct startup
 * @sys: char being evaulauted
 * @x: int being evaluated
(*
 * Description: defines new type struct print)?
 */

struct print
{
	char *sys;
	int (*x)(va_list);
};

/**
 * print_t - typedef for struct print
 */

typedef struct print print_t;

int _not_putchar(char x);
int _printf(const char *format, ...);
int print_character(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_integer(va_list list);

#endif /* MAIN_H */
