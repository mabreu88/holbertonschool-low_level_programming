#include "main.h"
/**
 * reverse_array - Checker
 *
 *@a: A string.
 *
 *@n: A interger.
 */
void reverse_array(int *a, int n)
{
	int i = 0, x;

	while (i < n--)
	{
		x = a[i];
		a[i++] = a[n];
		a[n] = x;
	}
}
