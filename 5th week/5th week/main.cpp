#include <stdio.h>

int main(void)
{
	int a = -6;

	if (a < 0)
	{
		a = -a;
	}

	printf("a : %d\n" , a);

	return 0;
}