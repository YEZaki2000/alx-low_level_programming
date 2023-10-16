#include <stdio.h>
int main()
{
	int var = 2;
	int othervar;
	int *p;

	*p = &var;
	othervar = &p;
	printf("%d", othervar);
	return 0;
}
