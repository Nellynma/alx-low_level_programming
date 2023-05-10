#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches recursively for a value in a sorted
  *                             array of integers using binary search.
 * @left: Starting index of the [sub]array to search.
  * @right: Ending index of the [sub]array to search.
  * @array: The pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: -1 if value is not found or if array is NULL
 * else the first index where value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t l;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (l = left; l < right; l++)
		printf("%d, ", array[l]);
	printf("%d\n", array[l]);

	I = left + (right - left) / 2;
	if (array[l] == value && (l == left || array[l - 1] != value))
		return (l);
	if (array[l] >= value)
		return (advanced_binary_recursive(array, left, l, value));
	return (advanced_binary_recursive(array, l + 1, right, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *                   of integers using advanced binary search.
   * @array: The pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: -1 if value is not found or if array is NULL
 * else the first index where value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
