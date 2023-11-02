#include "main.h"

/**
 * argstostr - lhskjdf
 * @ac: lskjdf
 * @av: lksjdf
 * Return: lksjdf
 */

char *argstostr(int ac, char **av)
{
	char *s;
	/*char *temp;*/
	int i, j, length, lengthbefore, slngh;
	char newline = '\n';
	/* int x; */

	/*
	temp = malloc(sizeof(av));
	for (x = 0; x < ac; x++)
	{
		char length = strcat("lngh", itoa(x));
		strcpy(temp[x], length);
	}
	*/

	s = malloc(sizeof(av) * 10);
	strcpy(s, av[0]);
	slngh = strlen(s);
	s[slngh + 1] += newline;

	lengthbefore = 0;
	for (i = 1; i < ac; i++)
	{
		/*printf("current arg%s\n", av[i]);*/
		/*char lengthbefore = strcat("lngh", itoa(i - 1));*/
		lengthbefore += strlen(av[i - 1]);
		/*printf("%d\n", lengthbefor);*/
		length -= length;
		length += strlen(av[i]);
		slngh += length;
		for (j = 0; j < length; j++)
		{
			/*printf("%c\n", av[i][j]);
			printf("s: %c\n", s[j]);
			*/
			s[lengthbefore + j] = av[i][j];
			/*
			if (j == (length - 1))
			{
				s[lengthbefore + j + 1] = newline;
				lengthbefore += 1;
			}
			*/
			/*printf("slengthbefore + j: %c\n", s[lengthbefore + j]);*/
		}
		printf("last in s: %c\n", s[slngh - 1]);
		printf("last s: %c\n", s[slngh]);
		s[slngh] += newline;
		/*printf("s now: %s\n", s);*/
		/*lengthbefore += length;*/
	}

	return (s);
}
