#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#define UNUSED(x) (void)(x)
#define BUFFER_SIZE 1024
int _printf(const char *format, ...);
#define TIRET 1
#define PLUS 2
#define ZERO 4
#define HASH 5
#define SPACE 6
int handle_flags(const char *format, int *i);
int handle_length(const char *format, int *i);
int handle_precision(const char *format, int *i, ...);
int handle_print(const char *format, int *i, va_list list, char buffer[],
		int flags, int width, int precision, int len);
int _isdigit(char c);
int handle_width(const char *format, int *i, ...);
#define MIN 1
#define MAJ 2
/**
 *struct format - struct op
 *@format: char
 *@fn: int
 */
struct format
{
	char format;
	int (*fn)(va_list, char[], int, int, int, int);
};
typedef struct format format_t;
long int convert_size_nbr(long int num, int size);
long int convert_size_unsigned(unsigned long int num, int size);
int handle_len(const char *format, int *i);
#endif
