#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_character(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_integer(va_list list);

#endif /* MAIN_H */
