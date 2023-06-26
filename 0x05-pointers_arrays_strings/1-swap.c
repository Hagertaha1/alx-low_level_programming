#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: swap to b
 * @b: swap to a
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{ int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
