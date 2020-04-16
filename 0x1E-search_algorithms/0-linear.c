#include "search_algos.h"

/**
 * linear_search - search for a value with linear search algorithm
 * @array: array of integers
 * @size: array length
 * @value: integer to search
 *
 * Return: index of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!array)
	{
		return (-1);
	}
	while (idx < size)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
		idx++;
	}
	return (-1);
}
