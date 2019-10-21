#ifndef ABS_H
#define ABS_H
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
