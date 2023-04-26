#include "main.h"
/**
 *_isdigit - print only nbr
 *@c: char
 *Return: digit
 */
int _isdigit(char c);

/**
 * handle_width - handle field width
 *@format: char
 *@i: int
 *Return: Width
 */
int handle_width(const char *format, int *i, ...)
{
int x, width;
va_list list;
width = 0;
	for (x = *i + 1; format[x] != '\0'; x++)
	{
		if (_isdigit(format[x]))
		{
			width *= 10;
			width += format[x] - 0;
		}
		else if (format[x] == '*')
		{
			x++;
			width = va_arg(list, int);
			break;
		}
		break;
	}
	*i = x - 1;
	return (width);
}
/**
*_isdigit - print only nbr
*@c: char
*Return: digit
*/
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (-1);
	return (0);
}