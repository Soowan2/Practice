// ������ �ִ� 10, 000 ������ �����Ǿ��ֽ��ϴ�.
// ������ ������ 1, 2, 3, 4, 5�� �ϳ��Դϴ�.
// ���� ���� ������ ���� ����� ������ ���, return�ϴ� ���� �������� �������ּ���.

#include<stdio.h>
#include<stdio.h>
#include<time.h>

int answer(int nums[],int num) {
	
	int correct = 0;

	int answer[] = { 0, };

	for (int i = 0; i < num; i++)
	{
		answer[i] = rand() % 5 + 1;
	}

	for (int i = 0; i < num; i++)
	{
		if (nums[i] == answer[i])
		{
			correct++;
		}
	}
	return correct;
}

int ����() {
	srand(time(0));

	int num = rand() % 10000 + 1;

	int nums[] = { 0, };

	������1(nums,num);
	������2(nums,num);

	if (������1(nums, num) > ������2(nums, num))
	{
		printf("���� ���� ������ ���� ���� ����� ������ 1�Դϴ�.");
	}
	else if (������1(nums, num) < ������2(nums, num))
	{
		printf("���� ���� ������ ���� ���� ����� ������ 2�Դϴ�.");
	}
	else
	{
		printf("������1�� ������2�� ���� ���� ������ �������ϴ�.");
	}

}

int ������1(int nums[], int num) {
	

	for (int i = 0; i < num; i++)
	{
		nums[i] = rand() % 5 + 1;
	}

	answer(nums, num);

	return answer(nums, num);

}

int ������2(int nums[], int num) {


	for (int i = 0; i < num; i++)
	{
		nums[i] = rand() % 5 + 1;
	}

	answer(nums, num);

	return answer(nums, num);

}


int main(void) {

	����();

}