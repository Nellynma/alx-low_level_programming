#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using interpolation search.
 * @array: The pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: -1 if value is not found or if array is NULL
 * else the first index where value is located.
  *
  * Description: Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, m, n;

	if (array == NULL)
		return (-1);

	for (m = 0, n = size - 1; n >= m;)
	{
		l = m + (((double)(n - m) / (array[n] - array[m])) * (value - array[m]));
		if (l < size)
			printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", l);
			break;
		}

		if (array[l] == value)
			return (l);
		if (array[l] > value)
			n = l - 1;
		else
			m = l + 1;
	}

	return (-1);
}
