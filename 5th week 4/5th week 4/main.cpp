#include <stdio.h>	

int main(void)
{
	int n;
	printf("�����Է� : ");
	scanf_s("%d", &n);
	switch (n % 3)
	{
	case 0:
		printf("����");
		break;
	case 1:
		printf("��");
		break;
	case 2:
		printf("��");
		break;
	}
	return 0;
}