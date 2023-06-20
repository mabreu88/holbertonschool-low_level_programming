#include "main.h"
/**
* more_numbers - Checker
*
* Return: Always 0
*/
void more_numbers(void)
{
	int a, b = 0;

	for (; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');

			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
