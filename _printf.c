#include <stdio.h>
#include "main.h"

void print_buffer(const char *format, va_list list, int *i);

/**
 * _printf - Printf function
 * @format: const char.
 * Return: Printed char.
 */
int _printf(const char *format, ...)
{
int i, printed_char;
va_list list;

i = count = 0;
	va_start(list, format);
	if (format == NULL)
		return (-1);

	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + i) == '\0')
				return (-1);
			printed_chars += print_buffer(format, list, &i);
		}
		else
		{
			_putchar(*(format + i));
		}
	}

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @format: Array of chars
 * @list: Index at which to add next char, represents the length.
 * @i: int
 */
void print_buffer(const char *format, va_list list, int *i)
{
int i, j;
char *x, *y = "(null)";
int res = 0;
	switch (*(format + *i + 1)
			{
			case 's':
			x = va_arg(list, char *);
			if (x == NULL)
			{
			for (i = 0; *(y + i) != '\0'; i++)
			{
			_putchar(*(y + i));
			res++;
			}
			}
			else
			{
			for (j = 0; (x[j]) != '\0'; j++)
			{
			_putchar(x[j]);
			res++;
			}
			}
			break;
			case 'c':
			_putchar(va_arg(list; int));
			res++;
			break;
			case '%':
			_putchar(format[*i]);
			res++;
			break;
			default:
			_putchar(format[*i]);
			res++;
			*i -= 1;
			break;
			}
	*i += 1;
			return (res);
}
