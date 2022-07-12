#include "main.h"

/**
 * select_formatter - selects the format specifier.
 * @s: pointer to the string of the format.
 *
 * Return: number of bytes printed
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