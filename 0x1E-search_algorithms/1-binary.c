#include "search_algos.h"
/**
 * binary_search - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: searches for a value in an array
 * of integers using the Linear search algorithm
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int half_index, pivot, flag = 0;
	int tmp;

	if (size % 2 == 0)
		half_index = ((int)size / 2) - 1;
	else
	{
		half_index = ((int)size / 2);
		flag = 1;
	}
	pivot = array[half_index];
	if (pivot == value)
		return (pivot);
	if (pivot > value)
	{
		if (flag == 0)
			size = ((int)size / 2) - 1;
		else
			size = ((int)size / 2);
		tmp = binary_search(array, size, value);
	}
	if (pivot < value)
	{
		if (flag == 1)
		{
			size = ((int)size / 2);
			array = &array[half_index + 1];
		}
		else
		{
			size = ((int)size / 2);
			array = &array[half_index + 1];
		}
		tmp = binary_search(array, size, value);
	}
	if (tmp >= 0)
		return (tmp);
	else
		return (-1);
}
