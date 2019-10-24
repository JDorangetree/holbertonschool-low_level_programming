#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: variable Array
 * @size: Size of the array
 * @cmp: Pointer to the function
 *
 * Description: Executes a function given as a parameter
 * on each element of an array
 * Return: Empty
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		while (n < size)
		{
			if (cmp(array[n++]))
				return (n - 1);
		}
	}
	return (-1);
}
