#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - print name of file
 * @s1: first string
 * @s2: second string
 *
 * Description: concatenate two strings
 * Return: a pointer to the concatenate string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int j;
	int sum;
	int count;
	char *null;

	null = "";

	if (s1 == NULL)
		s1 = null;
	if (s2 == NULL)
		s2 = null;
	if (!s1 || !s2)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	sum = i + j;
	str = malloc(sizeof(char) * sum + 1);
	count = 0;
	while (count < i)
	{
		str[count] = s1[count];
		count++;
	}
	count = 0;
	while (count < j)
	{
		str[i] = s2[count];
		i++;
		count++;
	}
	return (str);
}
