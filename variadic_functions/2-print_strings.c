#include "variadic_functions.h"
/**
 *print_strings - Function that prints strings, followed by a new line.
 *@separator: A string of separators to print
 *@n: Parameters
 *@...: Variadic
 *Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x = 0;
	char *string;

	va_start(ap, n);
	for (; x < n; x++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
