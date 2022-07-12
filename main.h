#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

#define NULL_S "(null)"
#define INIT_PARAMS {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/**
 * struct formatter - struct for format specifier
 *
 * @s: format specificier token.
 * @f: function for the formatter.
 */

typedef struct formatter
{
	char *s;
	int (*f)(va_list);
} formatter_t;

/* PROTOTYPES */
/* main _printf function */

int _printf(const char *format, ...);

int (*select_formatter(char *s))(va_list);

/* characters and strings printing */

int _puts(char *str);
int _putchar(char c);

/* sub _printf function */

int print_c(va_list);
int print_s(va_list);
int print_percent(va_list);

#endif /* MAIN_H */
