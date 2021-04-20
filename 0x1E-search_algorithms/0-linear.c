#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array:  pointer to the first element
 * @size: number of elements in array
 * @value: value to search
 * Return:  first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int temp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			temp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, temp);
			if (temp == value)
				return (i);
		}
	}
	return (-1);
}
