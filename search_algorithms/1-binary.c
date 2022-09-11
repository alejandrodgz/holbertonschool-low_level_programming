#include "search_algos.h"

/**
 * binary2 - binary search
 * @array: array to search
 * @first: first digit
 * @last: last digit
 * @value: value to seach
 * Return: index of value
 */

int binary2(int *array, int first, int last, int value)
{
	int mid = (first + last) / 2;
	int i;
	char *sep = " ";

	if (array[mid] == 0)
		return (-1);
	if (value < first)
		return (-1);
	printf("Searching in array:");
	for (i = first; i <= last; i++)
	{
		printf("%s%d", sep, array[i]);
		sep = ", ";
	}
	printf("\n");
	while (mid > 0)
	{
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary2(array, first, (mid - 1), value));
		if (array[mid] < value && last != first)
			return (binary2(array, (mid + 1), last, value));
		else
			return (-1);
	}
	return (-1);
}

/**
 * binary_search - binary function
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
	int l, a;

	l = size - 1;
	if (array == NULL)
		return (-1);
	a = binary2(array, 0, l, value);
	return (a);
}
