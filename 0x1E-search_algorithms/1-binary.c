#include "search_algos.h"
/**
 * binary_search - searches value in a sorted array using Binary search algo
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: index where value is located or -1 if array NULL or value not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size -1;
	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%ld,", i);
		}
		printf("%ld\n", i);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		if (array[mid] > value)
			right = mid -1;

	}
	return (-1);
}
