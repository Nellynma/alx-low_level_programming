#include "search_algos.h"

/**
 * linear_search - Finds a value in
 * array of integers using Linear search algorithm
 *
 * @array: Po to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: -1 if value is not found or if array is NULL
 * else the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t  l = 0;

	if (array != NULL)
	{
		for (l = 0; l < size; l++)
		{
			printf("Value checked array[%lu] = [%d]\n", l, array[l]);
			if (array[l] == value)
			{
				return (l);
			}
		}
	}
	return (-1);
}
