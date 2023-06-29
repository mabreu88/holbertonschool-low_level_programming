#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A program that adds positive numbers
 *
 *@argc: Argument count
 *
 *@argv: Argument vector
 *
 *Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int num, result = 0, x;

	while (argc-- > 1)
	{
		for (x = 0; argv[argc][x]; x++)
		{
			if (!(isdigit(argv[argc][x])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
