#include "variadic_functions.h"
/**
 *print_all - Function that prints anything.
 *@format: A list of things to print
 *Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *t;
	int x = 0;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				t = va_arg(ap, char*);
				if (t != NULL)
				{
					printf("%s", t);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[x] == 'c' || format[x] == 'i' || format[x] == 'f' ||
				format[x] == 's') && format[(x + 1)] != '\0')
			printf(", ");
		x++;
	}
	va_end(ap);
	printf("\n");
}
