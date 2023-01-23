#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct data_type - struct to use it later
 * @s: symbol to print
 * @fun: function, we use pointer functions
 */

typedef struct args_t
{
	char *format;
	void (*function)();
} args_t;

#endif
