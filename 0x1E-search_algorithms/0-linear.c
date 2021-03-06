#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: searches for a value in an array
 * of integers using the Linear search algorithm
 *
 * Return: index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;
	int number;
	int tmp = 0;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		number = array[index];
		tmp = (int)index;
		printf("Value checked array[%d] = [%d]\n", tmp, number);
		if (number == value)
			return (tmp);
	}
	return (-1);
}
