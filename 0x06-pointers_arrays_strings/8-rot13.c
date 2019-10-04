/**
 *rot13 - string to rot13
*@s: string
*Return: s
 */
char *rot13(char *s)
{
	int i = 0, c;

	while (s[i] != '\0')
	{
		c = 0;
		if  (c == 0 && ((s[i] >= 97 && s[i] <= 109) || (s[i] >= 65 && s[i] <= 77)))
		{
			s[i] = s[i] + 13;
			c++;
		}
		while (c == 0 && ((s[i] >= 110 && s[i] <= 122) || (s[i] > 77 && s[i] < 91)))
		{
			s[i] = s[i] - 13;
		}
		i++;
	}
	return (s);
}
