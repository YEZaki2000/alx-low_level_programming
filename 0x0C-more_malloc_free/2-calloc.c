#include "main.h"

/**
 * _calloc - lksjdf
 * @nmemb: lksjdf
 * @size: ksjdfk
 * Return: lksjdf
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if ((nmemb == 0) || (size == 0))
	{
		return NULL;
	}

	return (calloc(nmemb, size));
}	
