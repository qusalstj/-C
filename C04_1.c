#include<stdio.h>
//�Է¹��� ������ ��ȣ�� ��ȯ�ϴ� ���α׷��� ������. �� ��Ʈ �����ڸ� ����Ͽ� ������ �ذ��� ��.
int main(void)
{
	int num, result;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d",&num);
	result = ~num;
	result += 1;
	printf("���: %d", result);
	return 0;
}