#include <stdio.h>

int main(void)
{
	int a = 3;

	if (a % 2 == 0)
	{
		a = 2;
	}
	else
	{
		a = 1;
	}

	printf("a : %d\n", a);

	return 0;
}

