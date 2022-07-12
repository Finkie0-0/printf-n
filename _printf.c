#include "main.h"

/**
 * _printf - write output to stdout, the standard output stream.
 *
 * @format: the format of the string.
 * Return: bytes to be printed after execution
 */

int _printf(const char *format, ...)
{
	va_list arg_ptr;
	int result = 0;
	char *p, *start;

	va_start(arg_ptr, format);
	if (!format || (format[0] == '%' && format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (p = (char *)format; *p; p++)
	{
		if (*p != '%')
		{
			result += _putchar(*p);
			continue;
		}
		start = p;
		p++;
		else
			sum += get_formatter(p, args_ptr);
	}
	va_end(args_ptr);
	return (result);
}


