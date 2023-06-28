#include "main.h"
/**
 * print_chessboard - Checker
 *
 * @a: An array to print
 *
 * Return: PLay
 * (https://www.youtube.com/watch?v=rgc_LRjlbTU&ab_channel=ChessVEVO)
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
