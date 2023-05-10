#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
 * @array: The pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: -1 if value is not found or if array is NULL
 * else the first index where value is located
  *
  * Description: Prints a value every time it is compared in the array.
  *              Use the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t l, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (l = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", l, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; l < jump && array[l] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", l, array[i]);
	printf("Value checked array[%ld] = [%d]\n", l, array[i]);

	return (array[l] == value ? (int)l : -1);
}
