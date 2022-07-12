#include "main.h"

/**
 * select_formatter - selects the format specifier.
 * @s: pointer to the string of the format.
 *
 * Return: number of bytes printed.
 */

int (*select_formatter(char *s))(va_list)
{
	formatter_t cp[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
	};
	int i;

	for (i = 0; cp[i].s != NULL; i++)
	{
		if (*(cp[i].s) == *s)
			break;
	}
	return (cp[i].f);
}

/**
 * get_formatter- finds the format function
 *
 * @s: pointer to the string of the format.
 * @args_ptr: argument pointer.
 *
 * Return: Always 0.
 */

int get_formatter(char *s, va_list args_ptr)
{
	int (*f)(va_list) = select_formatter(s);

	if (f)
		return (f(args_ptr));
	return (0);
}
