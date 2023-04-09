#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: the arguments numbers
 * @argv: the array numbers
 * Return: always 0 (pass)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv[0]);
	return (0);
}
