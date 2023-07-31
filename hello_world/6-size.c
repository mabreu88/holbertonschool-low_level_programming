#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
/*
 * The sizeof function return the size on bytes of diferent types of variables
 * char 8 bits, unsigned char 8 bits, signed char 8 bits, int 16 bits, unsigned
 * int 16 bit, signed int 16 bit, short int 8 bits, unsigned short int 8 bits,
 * signed short int 8 bits,  long int 32 bit, signed long int 32 bits,
 * unsigned long int 32 bits, float 32 bits, double 64 bits,
 * long double 128 bits.
 */
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
