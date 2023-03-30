#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		i = a[counter];
		a[counter++] = a[n];
		a[n--] = i;
	}
}
