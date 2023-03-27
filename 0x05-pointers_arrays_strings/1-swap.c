/**
 * swap_int - swaps integer values
 * @a - first integer parameter
 * @b - second integer parameter
 */







void swap_int(int *a, int *b)
{
	int temporary = *a;
	*a = *b;
	*b = temporary;
}
