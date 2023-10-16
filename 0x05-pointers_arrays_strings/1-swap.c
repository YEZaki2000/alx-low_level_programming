/**
 * swap_int - swaps the values of two integers.
 * @a: first int.
 * @b: second int.
 * Return: Null.
 */

void swap_int(int *a, int *b)
{
	int mya, myb;

	mya = *a;
	myb = *b;
	*a = myb;
	*b = mya;
	
}
