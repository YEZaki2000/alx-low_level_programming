#include "main.h"

void reverse_array(int *a, int n)
{
	int i, c, b[100];

	for (c = 0; c < n; c++)
	{
		b[c] = a[c];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[n - i - 1];
	}
}
