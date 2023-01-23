#include "variadic_functions.h"
/**
 * integer_print - prints an integer
 * Description: this function prints integers
 * @args: the list of parameters
 */
void integer_print(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * char_print - prints a char
 * Description: this function prints chars
 * @args: the list of parameters
 */
void char_print(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * float_print - prints a float
 * Description: this function prints floats
 * @args: the list of parameters
 */
void float_print(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * string_print - prints a string
 * Description: this function prints strings
 * @args: the list of parameters
 */
void string_print(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all - print types: char, integer, float and string
 * Description: this function prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator;
	args_t arguments[] = {
		{"c", char_print},
		{"i", integer_print},
		{"f", float_print},
		{"s", string_print},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	separator = "";

	while (format != NULL && *(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == *(arguments[j]).format)
			{
				printf("%s", separator);
				arguments[j].function(args);
				separator = ", ";

			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
