#include "search_algos.h"

/**
 * print_array - print an array
 * @array: array to print
 * @size: array length
 *
 * Return: void
 */

void print_array(int *array, size_t size)
{
	size_t count = 0;

	printf("Searching in array: ");
	while (count < size)
	{
		printf("%d", array[count]);
		if (count != size - 1)
		{
			printf(", ");
		}
		count++;
	}
	printf("\n");
}

/**
 * binary_search - search for a value with binary search algorithm
 * @array: array of integers
 * @size: array length
 * @value: integer to search
 *
 * Return: index of value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx = (size - 1) / 2;
	int status = 0;

	if (!array)
	{
		return (-1);
	}
	print_array(array, size);
	if (value == array[idx])
	{
		return (idx + 1);
	}
	if (value > array[idx])
	{
		if (size == 1)
		{
			return (-1);
		}
		status = binary_search(array + idx + 1, size - idx - 1, value);
		if (status == -1)
		{
			return (-1);
		}
		return (status += idx);
	}
	if (value < array[idx])
	{
		if (size == 1)
		{
			return (-1);
		}
		status = binary_search(array, size - (size - idx), value);
		return (status);
	}
	return (-1);
}
