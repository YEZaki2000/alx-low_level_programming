#include "main.h"

/**
 * _realloc - lksjdfklsdj
 * @ptr: lksjdf
 * @old_size: lksdjfkl
 * @new_size: lksjdflkj
 * Return: Nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	(void)old_size;
	ptr = realloc(ptr, new_size);

	return (ptr);
}
