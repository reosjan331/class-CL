#include <stdio.h>

int main(void)
{
	int YYYY, MM, DD, res;
		
	printf("����⵵ 4�ڸ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &YYYY);

	printf("�¾ ���� �Է��ϼ��� : ");
	scanf_s("%d", &MM);

	printf("�¾ ������ �Է��ϼ��� : ");
	scanf_s("%d", &DD);

	printf("%d,%d,%d\n", YYYY, MM, DD);

	res = YYYY - MM + DD;

	if (res % 10 == 0)
	{
		printf("verygood");
	}
	else
	{
		printf("soso");
	}

	return 0;

}