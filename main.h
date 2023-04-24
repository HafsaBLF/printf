#ifndef MAIN_H
#fedine MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#define UNUSED(x)(void)(x)
#define BUFFER-SIZE 1024
int-printf(const char *format,...);
int handle_flags(const char *format,int i);
int handle_length(const char *format, int i );
#endif
