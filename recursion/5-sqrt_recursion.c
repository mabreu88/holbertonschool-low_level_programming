#include "main.h"
/**
 * sqrt2 - Makes possible square operation
 *
 * @a: equal to n
 *
 * @b: number that iterates with a
 *
 * Return: 1 success -1 Fail
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - Checker
 *
 * @n: Integer
 *
 * Return: returns the natural square root of a number.
 * If n does not have a natural square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
		return (sqrt2(n, 1));
}
