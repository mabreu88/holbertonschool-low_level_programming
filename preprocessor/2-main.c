#include <stdio.h>
/**
 * main - prints the name of file
 * Return: 0 Sucess
 */
int main(void)
{
/*
 * __FILE__ is a standard predefined macro. With %s we indicate that we want
 *to print a character string
 */
	printf("%s\n", __FILE__);
	return (0);
}
