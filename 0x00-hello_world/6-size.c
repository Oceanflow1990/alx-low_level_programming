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

printf("Siz of a char: %lubyte($)\n", (unsigned long)sizeof(a));
printf("Siz of a int: %lubyte($)\n", (unsigned long)sizeof(b));
printf("Siz of a long int: %lubyte($)\n", (unsigned long)sizeof(c));
printf("Siz of a long long int: %lubyte($)\n", (unsigned long)sizeof(d));
printf("Siz of a  float: %lubyte($)\n", (unsigned long)sizeof(f));
return (0);
}
