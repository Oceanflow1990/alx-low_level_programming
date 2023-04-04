#include <stdio.h>
#include "main.h"

/**
 * _strstr - function for entry level
 * @haystack: input para
 * @needle: input para
 * Return: 0 (pass)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (NULL);
}
