#include "sort.h"
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	for (i = 0; i <= size - 1; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			if (array[j] < array[j - 1])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				print_array(array, size);
			}
		}
	}
}
