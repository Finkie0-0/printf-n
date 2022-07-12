#include "main.h"

/**
 * print_c - prints out characters.
 * @args_ptr: argument pointer
 * Return: Always 1.
 */

int print_c(va_list)
{
	char c;
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_s - prints out a string.
 *
 * Return: number chars printed.
 */

int print_s(va_list)
{
	char s;
	int counter;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (counter = 0; str[counter]; count++)
	{
		_putchar(str[counter]);
	}
	return (counter);
}

/**
 * print_percent - prints out character %.
 *
 * @args_ptr: argument pointer.
 *
 * Return: number chars printed.
 */
 
int print_percent(va_list)
{
	char arg_ptr;
	(void)arg_ptr;
	return (_putchar('%'));
}
