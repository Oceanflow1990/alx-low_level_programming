#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - contatenate two strings of any size
 * @s1: 1st contact. str
 * @s2: 2nd contact. str
 *
 * Return: 1st and 2nd conactenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
		char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		j++;

	while (s2[j])
		j++;

	l = i + j;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;
	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
