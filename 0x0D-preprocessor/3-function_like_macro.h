#ifndef _3_FUNCTION_LIKE_MACRO_H
#define _3_FUNCTION_LIKE_MACRO_H
/**
 * ABS -  Determine the absolute value of an integer.
 * @n: The evaluated number
 * Description: This prints absolute value
 * Return: 1 Value if it lowercase
 */
int ABS(int n)
{

	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
#endif
