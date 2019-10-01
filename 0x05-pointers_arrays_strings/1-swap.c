#include "holberton.h"
/**
 * swap_int -  swap two integers.
 *@a: first int to swap
 *@b: secod int to swap
 * Description: Swap the values of two integers
 * Return: return the result
 */
void swap_int(int *a, int *b)
{
	int temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}
