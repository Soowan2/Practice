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

	/*주어진 숫자 중 3개의 수를 더했을 때 소수가 되는 경우의 개수를 구하려고 합니다.
	숫자들이 들어있는 배열 nums가 매개변수로 주어질 때, 
	nums에 있는 숫자들 중 서로 다른 3개를 골라 더했을 때 소수가 되는 경우의 개수를 return 하도록 solution 함수를 완성해주세요.*/

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