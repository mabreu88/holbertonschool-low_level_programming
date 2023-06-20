#include "main.h"
/**
 * times_table - Checker
 *
 */
void times_table(void)
{
	int x, y, z, uu, dd;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z > 9)
			{
				uu = z % 10;
				dd = (z - uu) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(dd + '0');
				_putchar(uu + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			_putchar(z + '0');
			}
		}
	_putchar('\n');
	}
}
