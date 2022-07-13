#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
/**
 * array_iterator - aa
 * @array: name
 * @size: fuction
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
