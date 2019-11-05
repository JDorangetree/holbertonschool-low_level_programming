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
	int i, j, x, y;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		ptr = "";
	else
	{
		i = 0;
		while (s1[i] != '\0')
			i++;
		j = 0;
		while (s2[j] != '\0')
			j++;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (!ptr)
		return (NULL);
	x = 0;
	while (x < i)
	{
		ptr[x] = s1[x];
		x++;
	}
	y = 0;
	while (x <= (i + j))
	{
		ptr[x] = s2[y];
		x++;
		y++;
	}
	return (ptr);
}
