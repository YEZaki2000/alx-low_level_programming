#include "main.h"

/**
  * is_palindrome - ksjdfk
  * @s: klsjdf
  * Return: lksjdf
  */

int is_palindrome(char *s)
{
	char revs = s;
	char temp;
	
	strcpy(temp, revs);
	int length = strlen(revs);
	int start = 0, end = length - 1;
	
	while (start < end) 
	{
		char temp = revs[start];
		revs[start] = revs[end];
		revs[end] = temp;
		start++;
		end--;
	}

	if (revs == s)
	{
		return (1);
	}
	return (0);
}
