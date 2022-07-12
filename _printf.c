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
	unsigned int i = 0;
	unsigned int counter = 0;
	int (*f)(va_list);

	va_start(arg_ptr, format);
	if (format == NULL)
		return (-1);

	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			counter++;
		}
		if (!format[i])

			return(counter);
		f = select_formatter(&format[i + 1]);
		if (f != NULL)
		{
			counter += f(args_ptr);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		counter++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args_ptr);
	return (counter);
}


