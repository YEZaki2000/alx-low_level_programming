/**
 * array_iterator - kjshdfj
 * @array: lksjdf
 * @size: lksjdf
 * @action: lksjdf
 * Return: klsjdf
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
