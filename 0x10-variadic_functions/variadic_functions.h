#ifndef _variadiac_functions_h_
#define _variadiac_functions_h
#include <stdio.h>
#include <stdarg.h>

typedef struct print_ops
{
	char *op;
	void (*f)(va_list);
} p_op;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);



#endif
