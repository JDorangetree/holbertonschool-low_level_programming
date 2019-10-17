#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - allocates memory using
 * @s1: first string
 * @s2: second string
 * @n: bytes
 *
 * Description: allocates memory using
 * Return: a pointer to the array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *null;
	unsigned int i, j, count;

	null = "";

	if (s1 == NULL)
		s1 = null;
	if (s2 == NULL)
		s2 = null;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;

	str = malloc(sizeof(char) + (i + j + 1));
	if (!str)
		return (NULL);
	if (n < j)
	{
		for (count = 0; count < i; count++)
			str[count] = s1[count];
		for (count = 0; count < n; i++, count++)
			str[i] = s2[count];
	}
	else
	{
		for (count = 0; count < i; count++)
			str[count] = s1[count];
		for (count = 0; count < j; i++, count++)
			str[i] = s2[count];
	}
	str[i] = '\0';
	return (str);
}
