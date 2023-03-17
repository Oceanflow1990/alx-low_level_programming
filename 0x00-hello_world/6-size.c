#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer
 * Return: 0 (pass)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lubyte($)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lubyte($)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lubyte($)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lubyte($)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lubyte($)\n", (unsigned long)sizeof(f));
return (0);
}
