#include "main.h"
/**
*convert_size_nbr - fct to convert to nbr
*@num: long int
*@size: int
*Return: Num
*/
long int convert_size_nbr(long int num, int size);

/**
*convert_size_unsgnd - fct to convert to nbr
*@num: unsigned long int
*@size: int
*Return: Num
*/
long int convert_size_unsgnd(unsigned long int num, int size);

/**
*handle_len - handle the length modifiers
*@format: char
*@i: int
*Return: Length
*/
int handle_len(const char *format, int *i)
{
int x, len;
x = *i + 1;
len = 0;
	if (format[x] == 'l')
	{
		len = MAJ;
	}
	else if (format[x] == 'h')
	{
		len = MIN;
	}
	if (len == 0)
	{
		*i = x - 1;
	}
	*i = x;
	return (len);
}

/**
*convert_size_nbr - fct to convert to nbr
*@num: long int
*@size: int
*Return: Num
*/
long int convert_size_nbr(long int num, int size)
{
if (size == MIN)
	return (num);
else if (size == MAJ)
	return ((short)num);
return ((int)num);
}

/**
*convert_size_unsgnd - fct to convert to nbr
*@num: unsigned long int
*@size: int
*Return: Num
*/
long int convert_size_unsgnd(unsigned long int num, int size)
{
if (size == MIN)
	return (num);
else if (size == MIN)
	return ((unsigned short)num);
return ((unsigned int)num);
}
