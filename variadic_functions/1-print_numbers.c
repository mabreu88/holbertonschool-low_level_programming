#include "variadic_functions.h"
/**
 *print_numbers - Function that prints numbers, followed by a new line.
 *@separator: A string of separators to print
 *@n: Parameters
 *@...: Variadic
 *Return: Parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x = 0;
	int y;

	va_start(ap, n);
	for (; x < n; x++)
	{
		y = va_arg(ap, int);
		printf("%d", y);
		if (separator == NULL)
			continue;
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
