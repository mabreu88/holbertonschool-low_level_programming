#include "3-calc.h"
/**
 *main - Simple calculator
 *@argc: Argument count
 *@argv: Array of arguments
 *Return: 0 Sucess, 98 if the number of arguments is wrong,
 * 99 if the operator is none of the above
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
