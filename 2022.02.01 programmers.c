// 시험은 최대 10, 000 문제로 구성되어있습니다.
// 문제의 정답은 1, 2, 3, 4, 5중 하나입니다.
// 가장 높은 점수를 받은 사람이 여럿일 경우, return하는 값을 오름차순 정렬해주세요.

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

int 문제() {
	srand(time(0));

	int num = rand() % 10000 + 1;

	int nums[] = { 0, };

	수포자1(nums,num);
	수포자2(nums,num);

	if (수포자1(nums, num) > 수포자2(nums, num))
	{
		printf("따라서 가장 문제를 많이 맞힌 사람은 수포자 1입니다.");
	}
	else if (수포자1(nums, num) < 수포자2(nums, num))
	{
		printf("따라서 가장 문제를 많이 맞힌 사람은 수포자 2입니다.");
	}
	else
	{
		printf("수포자1과 수포자2가 같은 수의 문제를 맞혔습니다.");
	}

}

int 수포자1(int nums[], int num) {
	

	for (int i = 0; i < num; i++)
	{
		nums[i] = rand() % 5 + 1;
	}

	answer(nums, num);

	return answer(nums, num);

}

int 수포자2(int nums[], int num) {


	for (int i = 0; i < num; i++)
	{
		nums[i] = rand() % 5 + 1;
	}

	answer(nums, num);

	return answer(nums, num);

}


int main(void) {

	문제();

}