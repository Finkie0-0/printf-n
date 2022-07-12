#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

#define NULL_S "(null)"
#define INIT_PARAMS {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

/**
 * struct formatter - struct for format specifiers.
 *
 * @formatter: format specifier token.
 * @f: function for formatter.
 */

typedef struct formatter
{
	char *formatter;
	int (*f)(va_list);
} formatter_t;

/* PROTOTYPES */

/* characters and strings printing */

int _puts(char *str);
int _putchar(int c);

/* main _printf function */

int _printf(const char *format, ...);

int (*get_formatter(char *s))(va_list arg_ptr);

int get_func(char *s, va_list arg_ptr);

/* sub _printf function prototypes  */

int print_char(va_list arg_ptr);
int print_string(va_list arg_ptr);

#endif /* MAIN_H  */
