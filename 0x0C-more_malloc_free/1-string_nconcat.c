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
	unsigned int i, j, count, size;

	null = "";
	size = 0;

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

	if (n < j)
		size = n;
	else
		size = j;
	str = malloc(sizeof(char) * (i + size + 1));
	if (!str)
		return (NULL);

	for (count = 0; count < i; count++)
		str[count] = s1[count];
	for (count = 0; count < size; i++, count++)
		str[i] = s2[count];
	str[i] = '\0';
	return (str);
}
