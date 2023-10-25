#include "main.h"

/**
  * _pow_recursion - lskjdf
  * @x: kljsdf
  * @y: ksjdfj
  * Return: ksljdf
  */

int _pow_recursion(int x, int y)
{
	int i;
	int res = 1; 

	for (i = 0; i < y; i ++)
	{
		res *= x;
	}
	if (y < 0)
	{
		return (res * -1);
	}
	return (res);
}
