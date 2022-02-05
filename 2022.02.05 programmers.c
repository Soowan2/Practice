#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include <stdlib.h>
char Right(int numbers[],int count) {

	char hand[] = {0,}; 
	int right;
	int left;


	for (int i = 0; i < count; i++)
	{
		if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
		{
			hand[i] = 'L';
			left = numbers[i];
		}

		if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
		{
			hand[i] = 'R';
			right = numbers[i];
		}

		if (numbers[i] == 2)
		{
			if (left == 1 && right != 3)
			{
				hand[i] = 'L';
			}
			if (left == 4 && right == 9)
			{
				hand[i] = 'L';
			}
			else
			{
				hand[i] = 'R';
			}
		}
		
		if (numbers[i] == 5)
		{
			if (left == 4 && right != 6)
			{
				hand[i] = 'L';
			}
			else
			{
				hand[i] = 'R';
			}
		}
		
		if (numbers[i] == 8)
		{
			if (left == 4 && right == 3)
			{
				hand[i] = 'L';
			}
			if (left == 7 && right != 9)
			{
				hand[i] = 'L';
			}
			else
			{
				hand[i] = 'R';
			}
		}
		if (numbers[i] == 0)
		{
			if (left == 7 && right != 9)
			{
				hand[i] = 'L';
			}
			if (left == 4 && right == 3)
			{
				hand[i] = 'L';
			}
			else
			{
				hand[i] = 'R';
			}
		}
	}

}

char Left(int numbers[],int count) {




}


int main(void) {
	int numbers[] = { 0, };
	int count = rand() % 1000 + 1;
	char hand;
	
	for (int i = 0; i < count; i++)
	{
		numbers[i] = rand() % 10;
	}
	

	printf("오른손잡이면 R, 왼손잡이면 L을 눌러주세요.");
	scanf("%c",hand);

	if (hand == 'r')
	{
		Right(numbers,count);
	}

	if (hand == 'l')
	{
		Left(numbers,count);
	}
	

	


}