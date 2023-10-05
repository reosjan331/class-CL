#include <stdio.h>	

int main(void)
{
	int n;
	printf("정수입력 : ");
	scanf_s("%d", &n);
	switch (n % 3)
	{
	case 0:
		printf("거짓");
		break;
	case 1:
		printf("참");
		break;
	case 2:
		printf("참");
		break;
	}
	return 0;
}