#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: the argument that count
 * @argv: the vector argument
 * Return: 0(pas)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
