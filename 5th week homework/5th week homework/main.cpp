#include <stdio.h>

int main(void)
{
	int YYYY, MM, DD, res;
		
	printf("출생년도 4자리를 입력하시오 : ");
	scanf_s("%d", &YYYY);

	printf("태어난 달을 입력하세요 : ");
	scanf_s("%d", &MM);

	printf("태어난 요일을 입력하세요 : ");
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