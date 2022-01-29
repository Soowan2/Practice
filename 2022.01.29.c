// 정수 2개(a, b)를 입력받아 합, 차, 곱, 몫, 나머지, 나눈 값을 자동으로 계산해보자.
// 단 0 <= a, b <= 2147483647, b는 0이 아니다.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	//int a;
	//int b;

	//scanf("%d", &a);
	//scanf("%d", &b);

	//printf("합 : %d\n", a + b);
	//printf("차 : %d\n", a - b);
	//printf("곱 : %d\n", a * b);
	//printf("몫 : %d\n", a / b);
	//printf("나머지 : %d\n", a % b);
	//printf("나눈 값 : %.3f\n", (float)a / (float)b);



	//정수 3개를 입력받아 합과 평균을 출력해보자.

	int a;
	int b;
	int c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("%d\n", a + b + c);
	printf("%.1f\n", ((float)a + (float)b + (float)c) / 3);


}