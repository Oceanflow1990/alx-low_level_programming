#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: integer
 * @argv: character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);
		return (0);

}
