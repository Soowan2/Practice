// ���� 2��(a, b)�� �Է¹޾� ��, ��, ��, ��, ������, ���� ���� �ڵ����� ����غ���.
// �� 0 <= a, b <= 2147483647, b�� 0�� �ƴϴ�.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	//int a;
	//int b;

	//scanf("%d", &a);
	//scanf("%d", &b);

	//printf("�� : %d\n", a + b);
	//printf("�� : %d\n", a - b);
	//printf("�� : %d\n", a * b);
	//printf("�� : %d\n", a / b);
	//printf("������ : %d\n", a % b);
	//printf("���� �� : %.3f\n", (float)a / (float)b);



	//���� 3���� �Է¹޾� �հ� ����� ����غ���.

	int a;
	int b;
	int c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("%d\n", a + b + c);
	printf("%.1f\n", ((float)a + (float)b + (float)c) / 3);


}