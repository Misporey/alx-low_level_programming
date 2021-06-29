#include "holberton.h"
/**
 * swap_int - swaps the value of two intergers
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;


}
