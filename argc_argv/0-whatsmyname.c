#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name
 *
 *@argc: Argument count
 *
 *@argv: Argument value
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
