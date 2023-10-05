#include <stdio.h>

int main(void)
{
	int number1 , number2, result;
	char op;

	printf("사칙연산 입력(정수) : ");

	scanf_s("%d %d %c", &number1 , &number2, &op);


	switch (op)
	{
	case'+':
		result = number1 + number2;
		break;
	case'-':
		result = number1 - number2;
		break;
	case'*':
		result = number1 * number2;
		break;
	case'/':
		result = number1 / number2;
		break;
	}

	printf("%d %c %d = %d\n", number1, op, number2, result);

	return 0;
}