#include "search_algos.h"

/**
  * binary_search - Search for value in sorted array
  *                 of integers using binary search.
  * @array: The pointer to first element of array.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1 if value is not found or if array is NULL
 * else the first index where value is located
  *
  * Description: Prints the [sub]array being searched.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t l, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (l = left; l < right; l++)
			printf("%d, ", array[l]);
		printf("%d\n", array[l]);

		l = left + (right - left) / 2;
		if (array[l] == value)
			return (l);
		if (array[l] > value)
			right = l - 1;
		else
			left = l + 1;
	}

	return (-1);
}
