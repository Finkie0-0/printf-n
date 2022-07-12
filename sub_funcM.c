#include "main.h"

/**
 * get_formatter - selects the format function.
 *
 * @s: pointer to the string of the format.
 *
 * Return: number of bytes of printed.
 */

int (*get_formatter(char *s))(va_list arg_ptr)
{
	formatter_t ch[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
	};

	int i = 0;

	for (i = 0; ch[i].c != NULL; i++)
	{
		if (*(ch[i].c) == *s)
			break;
	}

	return (ch[i].f);
}
