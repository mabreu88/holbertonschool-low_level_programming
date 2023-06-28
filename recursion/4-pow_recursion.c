#include "main.h"
/**
 * _pow_recursion - Checker
 *
 *@x: A interger
 *
 *@y: Riser
 *
 * Return: If y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
