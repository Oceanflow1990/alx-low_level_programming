#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: the argument that counts.
 * @argv: the vector argument
 * Return: 0 (pass)
 */

int main(int argc, char **argv)
{
	int mu1, mu2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
		mu1 = atoi(argv[1]);
		mu2 = atoi(argv[2]);
		printf("%d\n", mu1 * mu2);

		return (0);
}
