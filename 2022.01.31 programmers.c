#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

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

	for (int i = 0; i < 50; i++)
	{
		scanf("%d", &nums[i]);
		if (nums[i] == 0)
		{
			break;
		}
		count++;
	}

	printf("%d", solution(nums,count));










}