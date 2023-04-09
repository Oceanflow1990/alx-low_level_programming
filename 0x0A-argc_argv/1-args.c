#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: this is the argment that count
 * @argv: this is the vector argument
 * Return: 0 (pass)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
