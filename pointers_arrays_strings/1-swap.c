#include "main.h"
/**
 * swap_int - Checker
 *
 *@a: First parameter to check
 *
 *@b: Second parameter to check
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
