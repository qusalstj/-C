#include<stdio.h>
// ���α׷� ����ڷκ��� �� ���� ���� num1, num2, num3�� ������� �Է� ���� �Ŀ�
// ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���! 
// num1xnum2+num3
// ��, �Է� ���� �� ���� ������ 2,4,6�̶�� ������ ���·� ����� �ؾ� �Ѵ�.
// 2x4+6=14

int main(void)
{
	int num1, num2, num3;
	printf("num1, num2, num3�� �Է��ϼ���: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("%dx%d+%d=%d", num1, num2, num3, (num1 * num2) + num3);
	return 0;

}
/*
�ؼ��������� result��� ������ �����ؼ� ����� ����Ͽ���.
*/