#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - function that searches for a value in an array
 * @array: pointer to the first element of the array to search in
 * @size: number of element in the array
 * @value: the value to search for
 * Return: -1 if value not present or array NULL, index 
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if(array != NULL)
	{
		for(i=0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if(array[i] == value)
			{
				return(i);
			}
		}
		return(-1);
	}
	else
		return(-1);
}
