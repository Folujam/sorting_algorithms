#include "sort.h"

/**
*bubble_sort - sorts an array of integers in ascen order
*@array: pointer to start of the arr
*@size: number of elements in arr
* Return: void(it is printed out)
*/
void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	bool swappd;

	if (array == NULL || size == 0)
		return;
	a = 0;
	while (a < size - 1)
	{
		swappd = false;
		for (b = 0; b < size - a - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				swap_ele(&array[b], &array[b + 1]);
				print_array(array, size);
				swappd = true;
			}
		}
		if (swappd == false)
			break;
		a++;
	}
}
/**
*swap_ele - swaps elements at index
*@e1: element 1
*@e2: element 2
*Return: void
*/
void swap_ele(size_t *e1, size_t *e2)
{
	size_t temp;

	temp = e1;
	e1 = e2;
	e2 = temp;

}
