/**
 * swap_int - swaps the values of two integers.
 * @a: first int.
 * @b: second int.
 * Return: Null.
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
