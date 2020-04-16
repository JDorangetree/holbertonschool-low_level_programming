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

	size_t half;
    size_t i;

    half = (size - 1 ) / 2;
    printf("Searching in array: ");
    while ( i < size -1)
    {
        printf("%d, ", array[i]);
        i++;
    }
    printf("%d\n", array[i]);
    if (array[half] == value)
    {
        return (half);
    }
    
}
