#include "main.h"

/**
  * is_palindrome - ksjdfk
  * @s: klsjdf
  * Return: lksjdf
  */

int is_palindrome(char *s)
{
	/**
	char revs[100];
	char news[100];
	strcpy(news, s);
	strcpy(revs, s);
	char temp[100];
	
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
	puts(news);
	puts(revs);

	*/
	char *revs[100];
	int i, j, count = 0;

	while (s[count] != '\0') 
	{
		count++;
	}

	j = count - 1;

	for (i = 0; i < count; i++) 
	{
	  revs[i] = s[j];
	  j--;
	}
	puts(s);
	puts(revs);
	if (revs == s)
	{
		return (1);
	}
	return (0);
}
