#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{int i, b, t;
for (i = 0; b = (n - 1); i < b; i++; b--)
{
t = a[i];
a[i] = a[b];
a[b] = t;
}
}
