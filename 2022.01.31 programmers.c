#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int solution(int nums[], size_t nums_len) {

	int answer = 0;

	for (int i = 0; i < nums_len - 2; i++)
	{
		for (int k = i + 1; k < nums_len - 1; k++)
		{
			for (int j = k + 1; j < nums_len; j++)
			{
				for (int a = 2; a <= (nums[i] + nums[k] + nums[j]); a++)
				{
					if ((nums[i] + nums[k] + nums[j]) % a == 0 && (nums[i] + nums[k] + nums[j]) == a)
					{
						answer++;
					}
					if ((nums[i] + nums[k] + nums[j]) % a == 0)
					{
						break;
					}
				}
			}
		}
	}



	return answer;
}



int main(void) {

	/*�־��� ���� �� 3���� ���� ������ �� �Ҽ��� �Ǵ� ����� ������ ���Ϸ��� �մϴ�.
	���ڵ��� ����ִ� �迭 nums�� �Ű������� �־��� ��, 
	nums�� �ִ� ���ڵ� �� ���� �ٸ� 3���� ��� ������ �� �Ҽ��� �Ǵ� ����� ������ return �ϵ��� solution �Լ��� �ϼ����ּ���.*/

	int nums[50] = {0,};
	int count = 0;
	srand(time(0));
	

	printf("nums = ");

	for (int i = 0; i < rand() % 50 + 1; i++)
	{
		nums[i] = rand() % 1000 + 1; // nums �迭�� ������ �� ����
		printf("%d ", nums[i]);
		count++;
	}

	for (int i = 0; i < count; i++)
	{
		for (int k = 1; k < count; k++)
		{
			if (nums[i] == nums[k])
			{
				nums[k] = rand() % 1000 + 1;
			}
		}
	}

	printf("\n");
	printf("���� �� �ִ� �Ҽ��� ���� : %d", solution(nums,count));
	

	return 0;

}