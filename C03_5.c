#include<stdio.h>
//�Է� ���� �� ���� ���� num1, num2, num3�� ������� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
//(num1-num2)x(num2+num3)x(num3%num1)

int main(void)
{
	int num1, num2, num3, result;
	printf("num1, num2, num3�� �Է��ϼ���: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("(%d - %d)x(%d + %d)x(%d%%%d)=%d", num1, num2, num2, num3, num3, num1, result);
	return 0;
}